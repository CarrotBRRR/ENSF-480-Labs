#include <cstring>
#include <iostream>

#include "human.h"
#include "point.h"

using namespace std;

int main(void)
{
	double x = 2000, y = 3000;
	Human h("Ken Lai", x , y); 
    h.display();

	return 0;
}

