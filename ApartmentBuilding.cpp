#include "ApartmentBuilding.h"


ApartmentBuilding::ApartmentBuilding()
{
    this->capacity = 10;
    this->size = 0;
    this->unitList = new Unit[this->capacity];
}

ApartmentBuilding::ApartmentBuilding(int capacity)
{
    this->capacity = capacity;
    this->size = 0;
    this->unitList = new Unit[this->capacity];
}

int ApartmentBuilding::get_capacity()
{
    return this->capacity;
}

int ApartmentBuilding::get_current_number_of_units()
{
    return this->size;
}

Unit* ApartmentBuilding::get_contents()
{
    return unitList;
}

bool ApartmentBuilding::add_unit(Unit unit)
{
    if (this->size == this->capacity)
        return false;
    else
    {
        this->unitList[size].setParam(unit.get_value(), unit.get_num_bedrooms(), unit.get_area());
        size += 1;
        return true;
    }
}

ApartmentBuilding::~ApartmentBuilding()
{
    delete[] this->unitList;
}
