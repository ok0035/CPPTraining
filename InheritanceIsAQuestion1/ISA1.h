#ifndef __ISA1__
#define __ISA1__

class Rectangle {
private:
	int width;
	int height;
	int area;

public:
	Rectangle(int w, int h);
	void ShowAreaInfo();
};

class Square : public Rectangle {
public:
	Square(int length);
};

#endif
