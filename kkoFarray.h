#pragma once

#include <string>
#include <cstdlib>

	using namespace std;

#include "kkoFarray_link.h"

namespace kko{

class Farray{
	public:
		FILE *f;
		farray_link fl;
	public:
		Farray(string fn);
		~Farray();

	    int operator[](int index) const;
	    farray_link& operator[](int index);
};

}
