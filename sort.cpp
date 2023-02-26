#include <iostream>

#include <cstdlib>

//#include "kkoFarray_link.h"
#include "kkoFarray.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
using namespace kko;


void swap(Farray &arr, int ai, int bi) // функция для смены местами двух значений
{
   int temp = arr[ai],
       t2=arr[bi];
   arr[ai] = t2;
   arr[bi] = temp;
}

void bubbleSort(Farray &arr, int n)
{
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-1; j++)
            // ваш код
            if(arr[j]>arr[j+1])
            	swap(arr,j, j+1); 
}

int main(int argc, char** argv) {
	Farray fa("arr.dat");
	cout << "Arr.0:"<<endl;
	for (int j = 0; j < 100-1; j++)
    	cout << fa[j] << ' ';
    cout << endl;  
	
	bubbleSort(fa,100);

	cout << "Arr.1:"<<endl;
	for (int j = 0; j < 100-1; j++)
    	cout << fa[j] << ' ';
    cout << endl;    	
	return 0;
}

