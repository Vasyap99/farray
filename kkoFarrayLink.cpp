#include "kkoFarray.h"
#include "kkoFarray_link.h"

#include <iostream>
//namespace kko{
	//using namespace std;
	
		farray_link::farray_link(kko::Farray*fa1)
			:fa(fa1)
		{}
		//farray_link& farray_link::operator=(farray_link&fa){}
		farray_link& farray_link::operator=(int i){
			//cout << "0>>fa=" << i << endl;
			//cout << (unsigned int)(fa->f) << endl;			
			fwrite(&i,4,1,fa->f);
			//cout << "1>>fa=" << endl;			
			fflush(fa->f);
			//cout << "2>>fa=" << endl;						
		}	
		
		farray_link::operator int() const{
			int ii;
			fread(&ii,4,1,fa->f);
			return ii;
		}			
//}
