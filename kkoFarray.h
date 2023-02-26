#pragma once

#include <string>
#include <cstdlib>
#include <vector>

	using namespace std;

#include "kkoFarray_link.h"

namespace kko{

class Farray{
		//vector<farray_link> v;
	public:		
		FILE *f;
		Semaphore s;
	public:
		Farray(string fn);
		~Farray();

	    //int operator[](int index) const;
	    farray_link operator[](int index);
};

}
