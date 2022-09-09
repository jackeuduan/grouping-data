#pragma once
#ifndef APARTMENTB_H
#define APARTMENTB_H
#include "Unit.h"

class ApartmentBuilding
{
private:
	int capacity;
	Unit* unitList;
	int size;

public:
	ApartmentBuilding();  // default constructor allocates capacity for 10 units
	ApartmentBuilding(int capacity);  // constructor for ApartmentBuilding with given num units
	int get_capacity();  // returns the  number of units allowed

	// returns the current number of units in the apartment building
	int get_current_number_of_units();

	// returns a dynamic array of the units in the apartment building
	Unit* get_contents();

	// returns true and adds unit to the condo if there is sufficient space
	// otherwise returns false
	bool add_unit(Unit unit);

	// destructor
	~ApartmentBuilding();

};
#endif // !APARTMENTB

