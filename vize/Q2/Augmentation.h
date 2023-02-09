#ifndef AUGMENTATION_H
#define AUGMENTATION_H
#include "PointCloud.h"

#include<string>

using namespace std;

class Augmentation
{
public:
	Augmentation(string, PointCloud &);
	~Augmentation();
	Augmentation& randomRotatePC();
	Augmentation& randomShiftPC(int =2);
	Augmentation& randomScalePC(int =2);
	string getAugTypes()const;
	string getObjName()const;	
	void printPointCloud()const;
private:
	int createRandom(int);
	PointCloud pCloud;
	string objName;
	string augTypes;
};

#endif
