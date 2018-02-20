#ifndef __POINT__
#define __POINT__

class Point {
private:
	int xpos, ypos;

public:
	Point(int x, int y);
	void ShowPointInfo() const;

};

class Circle {
private:
	int xpos, ypos;
	int radius;

public:
	Circle(int x, int y, int r);
	int getXpos() const;
	int getYpos() const;
	int getRadius() const;
};

class Ring {
private:
	int inx, iny, outx, outy;
	int inr, outr;

public:
	Ring(int ix, int iy, int ic, int ox, int oy, int oc);
	void ShowRingInfo() const;
};

#endif
