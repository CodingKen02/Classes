// Add our class header files
#include "Rectangle.h"

int main()
{
    Rectangle a;

	a.setColor("Blue");
	a.setSize(4, 5);
	a.printRectangle();
	
	Rectangle b;

	a.setColor("Bright-Green");
	a.setSize(6, 2);
	a.printRectangle();

	Rectangle c;

	a.setColor("Magenta");
	a.setSize(9, 9);
	a.printRectangle();

    return 0;
}