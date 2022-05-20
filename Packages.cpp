#include "Packages.h"
#include <cstring>
Packages::Packages()
{
	strcpy(Package_ID, "");
	strcpy(Package_Name, "");
}

void Packages::displayPacDetails(const char pPackage_ID[], const char pPackage_Name[])
{
	strcpy(Package_ID, "pPackage_ID");
	strcpy(Package_Name, "pPackage_Name");
}

void Packages::selectPackages(const char pPackage_ID[], const char pPackage_Name[])
{
	strcpy(Package_ID, "pPackage_ID");
	strcpy(Package_Name, "pPackage_Name");
}

Packages::~Packages()
{
	//destructor
}
