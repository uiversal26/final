#include "Augmentation.h"
#include <iostream>
#include<string>
#include<iomanip>
#include<stdexcept>
#include<cstdlib>
#include<cmath>

using namespace std;

	Augmentation::Augmentation(string name, PointCloud & pc1)
	:objName(name),pCloud(pc1)
	{
		cout<<"Augmentation class constructor is called: "<<getObjName()<<endl;
	
	}
	Augmentation::~Augmentation(){
		cout<<"Augmentation class destructor is called: "<<getObjName()<<endl;
	}
	Augmentation& Augmentation::randomRotatePC(){
		int rotValueDeg = createRandom(180);
		int rotValueRad = M_PI*createRandom(180)/180;
		for(int i = 0; i<pCloud.getPcSize(); ++i){

			pCloud.setCoor(i,0, pCloud.getCoor(i,0)*cos(rotValueRad)-pCloud.getCoor(i,1)*sin(rotValueRad));	
			pCloud.setCoor(i,1, pCloud.getCoor(i,0)*sin(rotValueRad)+pCloud.getCoor(i,1)*cos(rotValueRad));	
			pCloud.setCoor(i,2, pCloud.getCoor(i,2));	
		}
		string data = to_string(rotValueDeg);
		augTypes += "-->rotate("+ data +")";
		return *this;
	}
	Augmentation& Augmentation::randomShiftPC(int shiftRange){
		
		int shiftValue = createRandom(shiftRange);
		for(int i = 0; i<pCloud.getPcSize(); i++){
			
			for(int j = 0; j<pCloud.getPcDim(); j++){
				pCloud.setCoor(i,j, shiftValue+pCloud.getCoor(i,j));
			}
		}
		string data = std::to_string(shiftValue);
		augTypes += "-->shift("+ data +")";
		return *this;
	}
	Augmentation& Augmentation::randomScalePC(int scaleRange){
		
		int scaleValue = createRandom(scaleRange);
		for(int i = 0; i<pCloud.getPcSize(); ++i){
			
			for(int j = 0; j<pCloud.getPcDim(); ++j){
				pCloud.setCoor(i,j, scaleValue*pCloud.getCoor(i,j));
			}
		}
		string data = std::to_string(scaleValue);
		augTypes += "-->scale("+ data +")";
		return *this;
	}
	string Augmentation::getAugTypes()const{
		
		return augTypes;
	}
	string Augmentation::getObjName()const{
		
		return objName;
	}
	void Augmentation::printPointCloud()const{
		
		cout<<"----"<<getObjName()<<"----"<<endl;
		for(int i = 0; i<pCloud.getPcSize(); i++){
			cout<<i<<"-->";
			
			for(int j = 0; j<pCloud.getPcDim(); j++){
				cout<<setw(3)<< pCloud.getCoor(i,j)<<" ";
			}
			cout<<endl;
		}
	}
	int Augmentation::createRandom(int value){
		
		int min = -value;
		int max = value;
		return min + (rand()%(min-max+1));
	}

