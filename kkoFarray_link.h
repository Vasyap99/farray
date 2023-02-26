

#pragma once

#include <string>
#include <cstdlib>
	using namespace std;

namespace kko{	
class Farray;
}
//#include "kkoFarray.h"
//namespace kko{


	class farray_link{
	public:
		kko::Farray *fa;
		farray_link(kko::Farray*fa1);
		//farray_link& operator=(farray_link&fa);
		farray_link& operator=(int i);
		operator int() const;
	};
	
//}
