#ifndef __PRINTER__
#define __PRINTER__

class Printer
{
private:
	char* str;

public:
	Printer();

	void SetString(const char* str);
	void ShowString();

	~Printer();
};

#endif

