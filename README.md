# ooc-project-IT21386022

ooc-project-IT21386022 created by GitHub Classroom

MLB_07.02_8_Event Photography Management System

Self contribution of the group members

IT21386022 - U.W.H.N. Senevirathne
**guest user CRC card**
**guest user UML Notation**
**registered user CRC card**
**registered user UML Notation**
**code**
**--GuestUser.h--**
#pragma once
class GuestUser
{
private:
	int userID;
	char userFname[20];
	char userLname[20];
	char userEmail[30];
public:
	GuestUser();
	GuestUser(int puserid, const char puserfname[], const char puserlname[], const char puseremail[]);
	void registerUser();
	virtual void displayDetails();
	~GuestUser();
};
**--RegisteredUser.h--**
#include"GuestUser.h"
#pragma once
class registeredUser : public GuestUser
{
	private:
		char username[10];
		char password[10];
	public:
		registeredUser();
		registeredUser(const char pusername[], const char ppassword[], int puserid, const char puserfname[], const char puserlname[], const char puseremail[]);
		void displayDetails();
		void login();
		~registeredUser();
};
**--RegisteredUser.cpp--**
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
**--GuestUser.cpp--**
#include "GuestUser.h"
#include <cstring>
GuestUser::GuestUser()
{
	userID = 0;
	strcpy(userFname, "");
	strcpy(userLname, "");
	strcpy(userEmail, "");
}
GuestUser::GuestUser(int puserid, const char puserfname[], const char puserlname[], const char puseremail[]){
	userID = puserid;
	strcpy(userFname, puserfname);
	strcpy(userLname, puserlname);
	strcpy(userEmail, puseremail);
}

void GuestUser::registerUser()
{
}
void GuestUser::displayDetails()
{
}
GuestUser::~GuestUser()
{
	//Destructor
}

IT21376054 - A.M.A.D. Herath
*payment CRC card
*payment UML Notation

IT21385414 - E.D.S. Gallage
*photographer CRC card
*photographer UML Notation

IT21226496 - W.M.M. Gunasekara
*packages CRC card
*packages UML Notation
*order CRC card
*order UML Notation


IT21584718 - P.H.R. Peiris
*album CRC card
*album UML Notation
