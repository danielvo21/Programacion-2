#ifndef STRING_H
#define STRING_H
#define max_lng 4096

class String {
private:
//Attributes
	int lng;
	
	char* cadena;
public:
//Constructors
	int string();
	int string(const char* c);
	int string(const String &a);
	
//Comparation
	bool operator== (const char* c) const;
	bool operator== (String &a);
	bool operator!= (const char* c) const;
	bool operator!= (String &a);

//Operator
	const String& operator = (const char* c);
	const String& operator = (const String &a);

	String& operator  +(const String &a) const;
	//String& operator  +(const char* c) const;

//Function
	void clear();
	int length() const;

};

#endif