#include <iostream>
#include <stdexcept>
#include "PointCloud.h"
#include "Augmentation.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int pc_array[5][3] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
	PointCloud pc1("PC 1", pc_array);
	pc1.printPointCloud();
	
	Augmentation aug1("AUG 1", pc1);
	aug1.randomShiftPC(4);
	cout<<"Aug. for point cloud 1: "<<aug1.getAugTypes()<<endl;
	aug1.printPointCloud();
	
	int min,max;
	cout<<"\nEnter minimum and maximum values of range: ";
	cin>>min>>max;
	
	try{
		PointCloud pc2("PC 2", min,max);
		pc2.printPointCloud();
		
		Augmentation aug2("AUG 2", pc2);
		aug2.randomShiftPC(5).randomScalePC(3);
		cout<<"Aug. for point cloud 2:"<<aug2.getAugTypes()<<endl;
		aug2.printPointCloud();
		
		
	}
	catch(invalid_argument &e)
	{
		cout<<e.what();
	}
	
	PointCloud pc3("PC 3");
	pc3.printPointCloud();
		
	Augmentation aug3("AUG 3", pc3);
	aug3.randomShiftPC(3).randomRotatePC().randomScalePC();
	cout<<"Aug. for point cloud 3:"<<aug3.getAugTypes()<<endl;
	aug3.printPointCloud();	
	
	return 0;
	
}
