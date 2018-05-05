#pragma once
/*
* EditDatabaseController.h
* ManagementApp
*
*
* Created by Giuseppe Barbieri on 4/16/18
*
*/

#ifndef EditDatabaseController_h
#define EditDatabaseController_h

#include <string>

using namespace std;

class EditDatabaseController
{
	//bit connect 
private:

public:
	static void createId();
	static void buyVehicle(string make, string model, string year, string type, string driveline,
		string enginetype, string enginesize, string pricePurchased, string setAskingPrice, string dateRecieved);
	static void sellVehicle(string id, string date, string priceSold);
	static void tradeVehicle();
	static int checkID(string id);
};

#endif // !EditDatabaseController.h
