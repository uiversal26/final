#include "PointCloud.h"

#include <iostream>
#include<string>
#include<iomanip>
#include<stdexcept>
#include<cstdlib>

using namespace std;

	PointCloud::PointCloud(string name, int min, int max)
	:pcName(name)
	{
		setRange(min,max);
		cout<<"PoinCloud class constructor with random assignment is called: "<<getPcName()<<endl;
		createRandomArray();
		
	}
	PointCloud::PointCloud(string name, int pc[][pcDim])
	:pcName(name)
	{
		setRange(-10,10);
		cout<<"PointCloud class constructor with array assignment is called: "<<getPcName()<<endl;
		for(int i = 0; i<pcSize; i++){
			for(int j = 0; j<pcDim; j++){
				
				setCoor(i,j,pc[i][j]);	
			}
		}
	}
	
	PointCloud::~PointCloud(){
		cout<<"PointCloud class destructor is called: "<<getPcName()<<endl;

	}
	void PointCloud::printPointCloud()const{
		cout<<"----"<<getPcName()<<"----"<<endl;
		for(int i = 0; i<pcSize; i++){
			cout<<i<<"-->";
			
			for(int j = 0; j<pcDim; j++){
				cout<<setw(3)<<pcArray[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	void PointCloud::setRange(int min, int max){
		if(min<max){
			minRange = min;
			maxRange = max;
		}else{
			throw invalid_argument("First argument must be less than second!\n\n");
		}
	}
	
	int PointCloud::getPcSize(){
		return pcSize;
	}
	int PointCloud::getPcDim(){
		return pcDim;
	}
	int PointCloud::getCoor(int row, int col)const{
		return pcArray[row][col];
	}
	void PointCloud::setCoor(int row, int col, int value){
		pcArray[row][col] = value;
	}
	string PointCloud::getPcName()const{
		return pcName;
	}
	void PointCloud::createRandomArray(){
		for(int i = 0; i<pcSize; i++){
			for(int j = 0; j<pcDim; j++){
				pcArray[i][j] = minRange + (rand()%(minRange-maxRange+1));
				
			}
		}
	}
