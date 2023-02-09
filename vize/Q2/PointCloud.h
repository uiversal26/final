#ifndef POINTCLOUD_H
#define POINTCLOUD_H

#include<string>

using namespace std;

class PointCloud
{
private:
	void createRandomArray();
	const static int pcSize = 5;
	const static int pcDim = 3;
	int pcArray[pcSize][pcDim];
	string pcName;
	int minRange, maxRange;
public:
	PointCloud(string, int=-10, int=10);
	PointCloud(string, int[][pcDim]);
	~PointCloud();
	void printPointCloud()const;
	void setRange(int,int);
	static int getPcSize();
	static int getPcDim();
	int getCoor(int, int)const;
	void setCoor(int,int,int);
	string getPcName()const;
};

#endif
