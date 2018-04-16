/*
* BuyVehicleController.cpp
* ManagementApp
*
*
* Created by Giuseppe Barbieri on 4/16/18
*
*/

#include "BuyVehicleController.h"
#include "CarModel.h"
#include "CarInfoModel.h"

#include <fstream>;
#include <iostream>

using namespace std;

void BuyVehicleController::addCarModel(int id, string make, string model, string year)
{
	CarModel car(id, make, model, year);
	ofstream ofs("carmodel.ros", ios::binary);
	ofs.write((char *)&car, sizeof(car));
	cout << "Buy vehicle Controller showing model...\n";
	ofs.close();
	car.showCar();
}

void BuyVehicleController::addCarInfoModel(int id, string type, string driveLine, string engineType, string engineSize)
{
	CarInfoModel carInfoModel(id, type, driveLine, engineType, engineSize);
}

void BuyVehicleController::showCarModel()
{
	cout << "Show Car Model method in buy vehicle controller showing model from binary file....\n";
	CarModel car;
	ifstream ifs("carmodel.ros", ios::binary);
	ifs.read((char *)&car, sizeof(car));
	ifs.close();
	car.showCar();
}

