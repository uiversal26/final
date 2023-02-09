#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Point{

	Point(double a =0,double b=0,double c=0)
	{
		z = a;
		y = b;
		x = c;
	}
	double x;
	double y;
	double z;
};

vector <Point> points(20);
vector <int> mask(20);

Point initPoint()
{
	Point dummy(rand()%100 / (double)10, rand()%100 / (double) 10, rand()%100 / (double) 10 );
	return dummy;
}

void printPoint(vector <Point> &a)
{
	cout << "X:\tY:\tZ:"<<endl;
	for(vector<Point>::iterator itali = a.begin(); itali != a.end(); itali++)
		cout << itali->x << "\t" << itali->y << "\t" << itali->z << endl;
}

bool zGT5(Point a)
{
	static int i = 0;
	if(a.z > 5){
		mask[i] = 1;
		i ++;
	}
	else{
		mask[i] = 0;
		i++;		
	}
}

typedef map<int, Point> Mip ;
	
int main(int argc, char** argv) {
	generate(points.begin(), points.end(), initPoint);
	
	printPoint(points);
	
	for_each(points.begin(), points.end(), zGT5);
	
	for(vector<int>::iterator it=mask.begin(); it != mask.end(); it ++)
		cout << *it << " ";
		
	Mip map;
	
	for (int i = 0; i < mask.size(); i++)
	{
		if(mask[i] == 1)
		{
			map.insert(make_pair( i, points[i] ));
		}
	}
	
	cout << "\n\nPoint Map:\n";
	for (Mip::iterator itali = map.begin(); itali != map.end(); itali++)
	{
		cout << itali->first << "\t" << itali->second.x << "\t" << itali->second.y << "\t" << itali->second.z;
		cout << endl;
	}
	
	return 0;
}
