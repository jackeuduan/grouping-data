#include <iostream>
#include "Unit.h"
#include "ApartmentBuilding.h"
#include <assert.h>

using namespace std;
int main()
{
	ApartmentBuilding A;
	assert(A.get_capacity() == 10);
	assert(A.get_current_number_of_units() == 0);

	Unit u2(9000, 2, 89.5);
	assert(A.add_unit(u2) == true);
	assert(A.get_capacity() == 10);
	assert(A.get_current_number_of_units() == 1);
	assert(A.get_contents()[0].get_area() == 89.5);

	ApartmentBuilding A2(2);
	assert(A2.get_capacity() == 2);
	assert(A2.get_current_number_of_units() == 0);

	Unit u3(5000, 1, 49.5);
	Unit u4(6000, 2, 60);
	assert(A2.add_unit(u2) == true);
	assert(A2.add_unit(u3) == true);
	assert(A2.add_unit(u4) == false);
	assert(A2.get_capacity() == 2);
	assert(A2.get_current_number_of_units() == 2);
	assert(A2.get_contents()[1].get_area() == 49.5);

	return 0;
}