#ifndef STRING_H
#define STRING_H

class String {
private:
//Attributes
	int lng;
	int max_lng;
	char* cadena;
public:
//Constructors
	int string();
	int string(const char* c);
	int string(const String &a);
	
//Comparation
	bool operator== (const char* c)const;
	bool operator== (String &a)const;
	bool operator!= (const char* c)const;
	bool operator!= (String &a)const;

//Operator
	const String& operator = (const char* c);
	const String& operator = (const String &a);




};



#endif