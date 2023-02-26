

#pragma once

#include <string>
#include <cstdlib>
	using namespace std;

namespace kko{	
class Farray;
}

#include "kkoSemaphore.h"

//#include "kkoFarray.h"
//namespace kko{


	class farray_link{
	public:
		kko::Farray *fa;
		int index;
		farray_link(kko::Farray*fa1,int index);
		farray_link(farray_link &&fl){  //считаем, что генерируется автоматически
			fa=fl.fa;
			index=fl.index;
		}
		farray_link& operator=(const farray_link&fl);
		farray_link&& operator=(int i);
		operator int();
	};
	
//}
