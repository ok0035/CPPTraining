#include "NewDelete.h"
#include<iostream>

int main() {

	//Point *pos1 = new Point;

	//pos1->xpos = 3;
	//pos1->ypos = 4;

	//Point *pos2 = new Point;
	//pos2->xpos = 5;
	//pos2->ypos = 6;

	//Point &pos = PntAdder(*pos1, *pos2);

	//using std::cout;
	//using std::endl;

	//cout << "x : " << pos.xpos << endl;
	//cout << "y : " << pos.ypos << endl;
	
	Point *position = new Point[2];

	position[0].xpos = 3;
	position[0].ypos = 4;

	position[1].xpos = 5;
	position[1].ypos = 6;

	Point &pos = PntAdder(position[0], position[1]);

	using std::cout;
	using std::endl;

	cout << "x : " << pos.xpos << endl;
	cout << "y : " << pos.ypos << endl;

	delete[] position;
	delete &pos;
	
}

Point& PntAdder(const Point &p1, const Point &p2)
{
	Point *pos = new Point;
	pos->xpos = p1.xpos + p2.xpos;
	pos->ypos = p1.ypos + p2.ypos;

	return *pos;
}
