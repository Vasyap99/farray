#include <iostream>

#include <cstdlib>

//#include "kkoFarray_link.h"
#include "kkoFarray.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
using namespace kko;


void swap(Farray &arr, int ai, int bi) // функция для смены местами двух значений
{
   int temp = arr[ai];
   arr[ai] = arr[bi];
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

bool check(Farray &arr, int n){
	bool b=true;
	int temp,t2;
    for (int i = 0; i < n-2; i++){
		temp = arr[i];
    	t2=arr[i+1];
    	b&=temp<=t2;
    	if(!b)return false;
    }    	   
	return b;
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
    
    cout << "arr sorted: " << (check(fa,100) ? "true" : "false") <<endl;
	return 0;
}

