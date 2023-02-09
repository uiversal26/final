#include "Tensor.h"

ostream &operator<<(ostream &out, const Tensor &a)
{
	out << a.getName() << ":<";
	for (int i = 0; i < a.tensorData.size(); i++)
		out << a.tensorData[i] << " ";
	out << ">" << endl;
	return out;	
}

istream &operator>>(istream &input,Tensor &a)
{
	for(int i = 0; i < a.tensorData.size(); i++)
	{
		int dummy;
		input >> dummy;
		a.tensorData[i] = dummy;
	}
	return input;
}

Tensor operator*(int a, Tensor &b)
{
	for(int i = 0; i < b.getSize(); i++)
		b.setTensorData(i,b.getTensor()[i] * a);
		
	return b;
}

Tensor::Tensor(const string &a, int b)
	:name(a)
{
	setSize(b);
	tensorData.resize(getSize());
}
Tensor::Tensor(const string &a)
	:name(a),size(0)
{
	tensorData.resize(getSize());
}

Tensor::~Tensor()
{
}

void Tensor::setSize(int a)
{
	if ( size > 0 ) size = a;
	else throw invalid_argument("Size must be greater than 0!");
}
void Tensor::setName(const string &a)
{
	name = a;
}


int Tensor::getSize() const
{
	return size;
}
string Tensor::getName() const
{
	return name;
}

void Tensor::setTensorData(int a, int b)
{
	tensorData[a] = b ;
}

vector <int> Tensor::getTensor() const
{
	return tensorData;
}

Tensor &Tensor::operator=(Tensor &a) 
{

	if( getSize() == a.getSize()) 
	{
	tensorData.assign(a.getTensor().begin(), a.getTensor().end()-1);
	}
	else
	{
		this->setSize( a.getSize() );
		for (int i = 0; i< getSize(); i++ )
		{
			setTensorData(i,a.getTensor()[i]);
		}
		return *this;
	}
}

Tensor Tensor::operator+(  const Tensor &a) 
{
	Tensor dummy("Cdum");
	if(getSize() == a.getSize())
	{
		for(int i = 0; i< getSize(); i++ )
			dummy.setTensorData(i,a.getTensor()[i] + tensorData[i]);
			return dummy;
	}
	else throw invalid_argument("Sizes must be equal addition!!");
}

Tensor Tensor::operator-( const Tensor &a) 
{
	Tensor dummy("C");
	if (getSize() == a.getSize())
	{
		for(int i = 0; i< getSize(); i++)
			dummy.setTensorData(i,a.getTensor()[i] + this->tensorData[i]);
	}
	else throw invalid_argument("Sizes must be equal for substractiong!!");
}

Tensor Tensor::operator*( const Tensor &a) 
{
	Tensor dummy("C");
	if (getSize() == a.getSize())
	{
		for(int i = 0; i< getSize(); i++)
			dummy.setTensorData(i,a.getTensor()[i] * this->tensorData[i]);
	}
	else throw invalid_argument("Sizes must be equal for Multiplication!!");
}

bool Tensor::operator==(const Tensor &a)
{
	if(a.getSize() == getSize())
	{
		for(int i = 0; i< getSize(); i++)
		{
			if(tensorData[i] == a.getTensor()[i]) continue;
			else return false;
		}
		return true;	
	}
	else return false;
}

bool Tensor::operator!=(const Tensor &a)
{
	if(a.getSize() != getSize())
	{
		for(int i = 0; i< getSize(); i++)
		{
			if(tensorData[i] != a.getTensor()[i]) continue;
			else return false;
		}
		return true;	
	}
	else return false;
}

bool Tensor::operator<(const Tensor &)
{
	
}
bool Tensor::operator>(const Tensor &)
{
}
