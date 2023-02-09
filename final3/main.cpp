#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int *SamplesPtr = new int[10];
	
	for (int i= 0 ; i <10 ; i++)
	{
		SamplesPtr[i] = rand()%3;
	}
	
	return 0;
}
