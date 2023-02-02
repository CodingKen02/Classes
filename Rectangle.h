#pragma once
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;


class Rectangle
{
    private:
        // Class variables
        int rectLength;
        int rectHeight;
        string rectColor;
        string rectColorID;

        // List of colors and their ASCII escape values
        string colorArray[16][2] =
        {"Black", "30m",
        "Red", "31m",
        "Green", "32m",
        "Yellow", "33m",
        "Blue", "34m",
        "Magenta", "35m",
        "Cyan", "36m",
        "White", "37m",
        "Bright-Black", "90m",
        "Bright-Red", "91m",
        "Bright-Green", "92m",
        "Bright-Yellow", "93m",
        "Bright-Blue", "94m",
        "Bright-Magenta", "95m",
        "Bright-Cyan", "96m",
        "Bright-White", "97m"};

    public:
        // Default constructor
        Rectangle() 
        {rectLength = 0;
        rectHeight = 0;
        rectColor = "White";
        rectColorID = "37m";};
        
        // void listColorOptions();

        void setSize(int length, int height);
        void setColor(string color);

        void getSize();
        void getColor();

        void getArea();
        void printRectangle();
};
