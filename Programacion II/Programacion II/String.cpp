#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "String.h"

int String::string(){
	lng = 1;
	cadena = new char[lng];
	cadena[0] = '\0';
	}

int String::string(const char* c){
	lng = strlen (c) + 1;
	cadena = new char[lng];
	strcpy_s(cadena, lng, c);
}

int String::string(const String &a){
	lng = strlen(a.cadena)+1;
	cadena = new char[lng];
	strcpy_s(cadena,lng+1, a.cadena);
};
/*
String::string(const char* format, ...)
{

}
*/

//Comparation
bool String::operator == (const char* c)const
{
	return strcmp(cadena, c) == 0;	
};

bool String::operator == (const String &a) const
{
	return strcmp(a.cadena, cadena) == 0;
}

bool String::operator != (const char* c)
{
	return strcmp(cadena, c) != 0;
};

bool String::operator != (const String &a)
{
	return strcmp(a.cadena, cadena) != 0;
}

/*
String& String::operator = (const char* c)
{
	strcpy_s(cadena, lng, c);
}
String& String::operator = (const String &a)
{	
	strcpy_s(cadena, lng, a.cadena);
}
*/