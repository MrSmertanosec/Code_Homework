#include <iostream>

struct Point
{
	int x;
	int y;
};

struct Line
{
	Point* line = new Point[2];
};

bool if_crossing(Line* line1, Line* line2)
{
	return (line1->line[0].x - line1->line[1].x == line2->line[0].x - line2->line[1].x &&
		line1->line[0].y - line1->line[1].y == line2->line[0].y - line2->line[1].y);
}

int main()
{
	Point* p1 = new Point();
	Point* p2 = new Point();
	Point* p3 = new Point();
	Point* p4 = new Point();

	p1->x = 0;
	p1->y = 0;

	p2->x = 0;
	p2->y = 1;

	p3->x = 1;
	p3->y = 0;

	p4->x = -1;
	p4->y = 1;

	Line* line1 = new Line();
	Line* line2 = new Line();

	line1->line[0] = *p1;
	line1->line[1] = *p2;

	line2->line[0] = *p3;
	line2->line[1] = *p4;

	if (!if_crossing(line1, line2))
	{
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}

	return 0;
}