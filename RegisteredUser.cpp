#include "registeredUser.h"
#include <cstring>
registeredUser::registeredUser()
{
	strcpy(username, "");
	strcpy(password, "");
}
registeredUser::registeredUser(const char pusername[], const char ppassword[], int puserid, const char puserfname[], const char puserlname[], const char puseremail[]) : GuestUser(puserid, puserfname, puserlname, puseremail)
{
	strcpy(username, pusername);
	strcpy(password, ppassword);
}
void registeredUser::displayDetails()
{
}
void registeredUser::login()
{
}

registeredUser::~registeredUser()
{
	//Destructor
}
