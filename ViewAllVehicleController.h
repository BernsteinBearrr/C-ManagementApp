#pragma once

#ifndef ViewAllVehicleController_h
#define ViewAllVehicleController_h
#include "CarModel.h"
#include <vector>
#include <string>

using namespace std;

class ViewAllVehicleController
{
private:

public:
	static vector<CarModel> getCarDB();
};


#endif // !ViewAllVehicleController_h