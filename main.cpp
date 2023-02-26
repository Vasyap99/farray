#include <iostream>

#include <cstdlib>

//#include "kkoFarray_link.h"
#include "kkoFarray.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
using namespace kko;

int main(int argc, char** argv) {
	//FILE *f=fopen("arr.dat","wb");
	Farray fa("arr.dat");
	for(long l=0;l<100;l++){
		cout << l << endl;
		fa[l]=rand();
	}
	//fclose(f);
	return 0;
}
