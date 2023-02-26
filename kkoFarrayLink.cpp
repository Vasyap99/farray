#include "kkoFarray.h"
#include "kkoFarray_link.h"

#include <iostream>
//namespace kko{
	//using namespace std;
	
		farray_link::farray_link(kko::Farray*fa1,int index)
			:fa(fa1), index(index)
		{}
		//farray_link& farray_link::operator=(farray_link&fa){}
		farray_link&& farray_link::operator=(int i){
			//cout << "0>>fa=" << i << endl;
			//cout << (unsigned int)(fa->f) << endl;
			fa->s.lock();
			fseek(fa->f,index*4,SEEK_SET);		
			fwrite(&i,4,1,fa->f);
			//cout << "1>>fa=" << endl;			
			fflush(fa->f);
			fa->s.unlock();			
			//cout << "2>>fa=" << endl;	
			return std::move(*this);					
		}	
		
		farray_link::operator int(){
			fa->s.lock();			
			fseek(fa->f,index*4,SEEK_SET);
			int ii;
			fread(&ii,4,1,fa->f);
			fa->s.unlock();			
			return ii;
		}		
		
		farray_link& farray_link::operator=(const farray_link&fl){
			fa->s.lock();			
			fseek(fa->f,fl.index*4,SEEK_SET);
			int ii;
			fread(&ii,4,1,fa->f);
			fa->s.unlock();			
			
			*this=ii;
		}			
//}
