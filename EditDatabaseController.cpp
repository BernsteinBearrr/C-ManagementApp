/*
* EditDatabaseController.cpp
* ManagementApp
*
*
* Created by Giuseppe Barbieri on 4/16/18
*
*/

#include "EditDatabaseController.h"
#include "CarModel.h"
#include "BuyVehicleController.h"

#include <string>
#include <iostream>
#include <fstream>
#include <limits>
#include <vector>
#include <sstream>

using namespace std;
static int id = 0;

istream& ignoreline(ifstream& in, ifstream::pos_type& pos)
{
	pos = in.tellg();
	return in.ignore(numeric_limits<streamsize>::max(), '\n');
}

string getLastLine(ifstream& in)
{
	ifstream::pos_type pos = in.tellg();

	ifstream::pos_type lastPos;
	while (in >> ws && ignoreline(in, lastPos))
		pos = lastPos;

	in.clear();
	in.seekg(pos);

	string line;
	getline(in, line);
	return line;
}

vector<string> splitString(string line)
{
	vector<string> internal;
	stringstream ss(line);
	string tok;

	while (getline(ss, tok, ' '))
	{
		internal.push_back(tok);
	}
	return internal;
}

void EditDatabaseController::createId()
{
	ifstream fin;
	fin.open("CarModel.txt");
	string line = getLastLine(fin);
	cout << "LAST LINE IN FILE : " + line << endl;
	vector<string> idString = splitString(line);
	
	stringstream idS(idString[0]);
	idS >> id;
	id++;
}


//If I'm buying im going to need to create an id..
//Take in make, model, year, type, driveline, enginetype, enginesize, pricePurchased, dateRecieved

void EditDatabaseController::buyVehicle(string make, string model, string year, string type, string driveline, string enginetype, string enginesize, double pricePurchased, string dateRecieved)
{
	createId();
	CarModel car(id, make, model, year);
	BuyVehicleController::addCarModel(id, make, model, year);
}

void EditDatabaseController::sellVehicle()
{
}

void EditDatabaseController::tradeVehicle()
{
}
