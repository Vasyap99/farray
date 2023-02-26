#include "kkoFarray.h"
#include "kkoFarray_link.h"

#include <iostream>

namespace kko{
	//using namespace std;

		Farray::Farray(string fn)
			:f(NULL), fl(this)
		{
			f=fopen(fn.c_str(),"rb+");
			//cout << "file:"<< (unsigned int)(f) << endl;
		}
		Farray::~Farray(){
			if(f!=NULL) fclose(f);
		}

	    int Farray::operator[](int index) const
    	{
    		fseek(f,index*4,SEEK_SET);
    		int i;
    		fread(&i,4,1,f);
        	return i;
    	}	
	    farray_link& Farray::operator[](int index)
    	{
    		//cout << "FA[]2" <<endl;
    		fseek(f,index*4,SEEK_SET);
        	return fl;
    	}

}
