#include <iostream>

#include <cstdlib>

//#include "kkoFarray_link.h"
#include "kkoFarray.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
using namespace kko;

int main(int argc, char** argv) {
	Farray fa("arr.dat");
	cout << fa[100] <<endl;
	cout << fa[1] <<endl;	
	cout << fa[500000] <<endl;		
	return 0;
}

