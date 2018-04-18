#include "View_Cars_Main.h"
#include"HomeScreen.h"
#include "BuyVehicleController.h"
#include "Utilities.h"
#include <string>
#include <iostream>

using namespace std;

void View_Cars_Main::viewCarsMenu()
{
	system("CLS");
	gotoxy(50, 9);
	cout << "\tVIEW CARS MENU\n";
	gotoxy(50, 10);
	cout << "--------------------------";
	gotoxy(50, 11);
	cout << "1. View All Cars\n";
	gotoxy(50, 12);
	cout << "2. Search Cars\n";
	gotoxy(50, 14);	
	int selection;
	cin >> selection;
	system("pause");

	switch (selection)
	{
	case 1:
		//This is a shortcut to the function that shows the binary file that has the CarModel object.
		BuyVehicleController::showCarModel();
		break;
	}
}

