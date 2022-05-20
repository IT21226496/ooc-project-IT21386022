class Packages
{
private:
	char Package_ID[20];
	char Package_Name[20];

public:
	Packages();
	void displayPacDetails(const char pPackage_ID[], const char pPackage_Name[]);
	void selectPackages(const char pPackage_ID[], const char pPackage_Name[]);
	~Packages();

};
