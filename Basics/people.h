#ifndef PEOPLE_H
#define PEOPLE_H

#include <string>
#include "birthday.h"
using namespace std;

class people
{
	public:
		people(string x, bdayC bo);
		void printInfo();
	private:
		string name;
		bdayC dob;

};

#endif
