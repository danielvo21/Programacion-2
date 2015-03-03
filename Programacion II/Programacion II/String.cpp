#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "String.h"

int String::string(){
	lng = 1;
	cadena = new char[lng];
	cadena[0] = '\0';
	return 0;
	}

int String::string(const char* c){
	lng = strlen (c) + 1;
	cadena = new char[lng];
	strcpy_s(cadena, lng, c);
	return 0;
}

int String::string(const String &a){
	lng = strlen(a.cadena)+1;
	cadena = new char[lng];
	strcpy_s(cadena,lng+1, a.cadena);
	return 0;
};

//Comparation
bool String::operator == (const char* c) const
{
	if (strcmp(cadena, c) == 0){ return 1; }
	else return 0;
	//return strcmp(cadena, c) == 0;	
};
/*
bool String::operator == (const String &a)
{
	if (strcmp(a.cadena, cadena) == 0){ return 1; }
	else return 0;
}
*/

bool String::operator != (const char* c) const
{
	if (strcmp(cadena, c) == 0){ return 0; }
	else return 1;
	//return strcmp(cadena, c) != 0;
};
/*
bool String::operator != (const String &a)
{
	return strcmp(a.cadena, cadena) != 0;
}
*/

const String& String::operator = (const char* c)
{
	if (cadena != NULL){
				if (strlen(cadena)+ 1 > lng){
						delete[] cadena;
						lng = strlen(c) + 1;
						cadena = new char[lng];
					}
				else
					clear();
				strcpy_s(cadena, lng, c);
	}

	else
	{
		clear();
	}

	return(*this);
}



const String& String::operator = (const String &a)
{	
	if (a.length() + 1 > lng)
	{
		delete[] cadena;
		lng = a.length() + 1;
		cadena = new char[lng];
	}
	else
		clear();
	strcpy_s(cadena, lng, a.cadena);
	return (*this);
}

/*
char*  String::operator +(const char* c) const
{
	int new_lng = strlen(c) + length(cadena);
	new char = cadena_tmp[new_lng];

};
*/

void String::clear()
{
	if (cadena != NULL)
	{
		memset(cadena, 0, max_lng);
	}

	lng = 0;
}

 int String::length() const
{
	return strlen(cadena);
}