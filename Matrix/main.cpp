#include <iostream>
#include "Matrix.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Matrix m1,m2,x;
	
	cout << "Enter matrix items: " << endl;
	cin >> m1 >> m2;
	
	cout << "\nm1\n" << m1 << endl;
	cout << "\nm2\n" << m2 << endl;
	cout << "\nx\n" << x << endl;
	
	x = m1 + m2;
	cout << "\nm1+m2\n" << x << endl;
	
	x = m1 * 5;
	cout << "\nm1*5\n" << x << endl;
	
	-m2;
	cout << "\nInverse of m2\n" << m2 << endl;
	
	!m1;
	cout << "\nTranspose of m1\n" << m1 << endl;
	
	
	return 0;
}
