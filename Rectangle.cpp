#include "Rectangle.h"

//###########################################################################//

// List is used duing interactive shell

// Lists all possible color options 
// Colors are displayed with their appropriate color
// void Rectangle::listColorOptions()
// {
// 	cout << "Possible Colors" << endl
// 		<< "############" << endl
// 		<< "\x1b[" << colorArray[0][1] << colorArray[0][0] << endl
// 		<< "\x1b[" << colorArray[1][1] << colorArray[1][0] << endl
// 		<< "\x1b[" << colorArray[2][1] << colorArray[2][0] << endl
// 		<< "\x1b[" << colorArray[3][1] << colorArray[3][0] << endl
// 		<< "\x1b[" << colorArray[4][1] << colorArray[4][0] << endl
// 		<< "\x1b[" << colorArray[5][1] << colorArray[5][0] << endl
// 		<< "\x1b[" << colorArray[6][1] << colorArray[6][0] << endl
// 		<< "\x1b[" << colorArray[7][1] << colorArray[7][0] << endl
// 		<< "\x1b[" << colorArray[8][1] << colorArray[8][0] << endl
// 		<< "\x1b[" << colorArray[9][1] << colorArray[9][0] << endl
// 		<< "\x1b[" << colorArray[10][1] << colorArray[10][0] << endl
// 		<< "\x1b[" << colorArray[11][1] << colorArray[11][0] << endl
// 		<< "\x1b[" << colorArray[12][1] << colorArray[12][0] << endl
// 		<< "\x1b[" << colorArray[13][1] << colorArray[13][0] << endl
// 		<< "\x1b[" << colorArray[14][1] << colorArray[14][0] << endl
// 		<< "\x1b[" << colorArray[15][1] << colorArray[15][0] << endl
// 		<< "############" << endl;

// }

//###########################################################################//

// Sets size of rectangle based on integer inputs
void Rectangle::setSize(int length, int height)
{
	rectLength = length;
	rectHeight = height;

    cout << "Rectangle size set to " << rectLength <<
	" " << rectHeight << endl;
}

//###########################################################################//

// Sets color of recangle based on string input
void Rectangle::setColor(string color)
{
	bool compatibleColor = false;
	int colorIndex = 0;

    // While loop to determine if color is compatible
    // Uses a 2D array to keep track of the proper color ID
	while (colorIndex < 16)
	{
		if (color == colorArray[colorIndex][0])
		{
			compatibleColor = true;
			break;
		}

		colorIndex++;
	}

    // Sets rectangle color and colorID if color is compatible
	if (compatibleColor)
	{
		rectColor = colorArray[colorIndex][0];
		rectColorID = colorArray[colorIndex][1];
		cout << "Rectangle color set to \x1b[" << rectColorID <<
		rectColor << "\x1b[39m" << endl;
	}
	else
	{
		cout << "Invalid color input" << endl;
	}
}

//###########################################################################//

// Outputs rectangle size
void Rectangle::getSize()
{
	cout << rectLength << " " << rectHeight << endl;
}

//###########################################################################//

// Outputs rectangle color
void Rectangle::getColor()
{
    cout << "Rectangle Color is \x1b[" << rectColorID <<
	rectColor << "\x1b[39m" << endl;
}

//###########################################################################//

// Outputs rectangle area
void Rectangle::getArea()
{
	cout << rectLength * rectHeight << endl;
}

//###########################################################################//

// Prints rectangle based on size and color
void Rectangle::printRectangle()
{
	for (int y = 0; y < rectHeight; y++)
	{
		for (int x = 0; x < rectLength; x++)
		{
			cout << "\x1b[" << rectColorID << "# ";
		}
		cout << endl;
	}
	cout << "\x1b[39m";
}

//###########################################################################//