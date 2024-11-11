#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <iomanip>

using namespace std;

void themathprocess();
void areafunc();
void regularpolyfunc();
void volumefunc();

namespace area {
    // Function to calculate the area of a square
    double square(double length) {
        return length * length;
    }

    // Function to calculate the area of a circle using its diameter
    double diacircle(double diameter) {
        double radius = diameter/2;
        
        return radius * radius * M_PI;
    }

    // Function to calculate the area of a circle using its radius
    double radcircle(double radius) {
        return radius * radius * M_PI;
    }

    // Function for area of triangle
    double triangle(double base, double height) {
        return base * height * 0.5;
    }
}


int main() {
    //All this main fuction does is start the mathprocess fuction and repeat it if yes and end it if no.
    string questiontocontinue;
    
    questiontocontinue = "Yes";
    
    while (questiontocontinue == "Yes" || questiontocontinue == "yes" || questiontocontinue == "YES") {
        themathprocess();
        
        cout << endl << "Do you want to continue?\nYes or No " << endl;
        
        cin >> questiontocontinue;
    }
    
    if (questiontocontinue == "No" || questiontocontinue == "no" || questiontocontinue == "NO") {
        cout << endl << "Thank you for using this math helper." << endl << endl;
    }
    else {
        cout << endl << "You didn't say yes or no but thank you for using this math helper, the code ended for not saying yes." << endl << endl;
    }
    
    
    return 0;
}





void themathprocess() {
    
    string firstQuestion;
    
    cout << endl << "What would you like me to do?" << endl;
    
    cin >> firstQuestion;
    
    if (firstQuestion == "Area" || firstQuestion == "area" || firstQuestion == "AREA" ) {
        areafunc();
    }
    else if (firstQuestion == "Volume" || firstQuestion == "volume" || firstQuestion == "VOLUME") {
        volumefunc();
    }
    else {
        cout << "Sorry that doesn't seem to be one of the things i can do." << endl;
        cout << "Some things I can do are: \n \nArea\nVolume*" << endl << endl;
    }
}





void areafunc() {
    
    cout << endl << "What polygon/3dSolid do you want the area for?" << endl;
    string whatIsThePoly;
    //getline(cin, whatIsThePoly);
    cin >> whatIsThePoly;
    
    if (whatIsThePoly == "Triangle" || whatIsThePoly == "triangle" || whatIsThePoly == "TRIANGLE") {
        cout << endl << "What is the base?" << endl;
        double baseOfTriangle;
        cin >> baseOfTriangle;
        cout << endl << "What is the height?" << endl;
        double heightOfTriangle;
        cin >> heightOfTriangle;
        cout << endl << fixed << setprecision(9) << "The Area of the Triangle is " << area::triangle( baseOfTriangle, heightOfTriangle) << endl;
    }
    else if (whatIsThePoly == "Rectangle" || whatIsThePoly == "rectangle" || whatIsThePoly == "RECTANGLE") {
        cout << endl << "What is the width?" << endl;
        double widthOfRectangle;
        cin >> widthOfRectangle;
        cout << endl << "What is the lenght?" << endl;
        double lengthOfRectangle;
        cin >> lengthOfRectangle;
        double area = widthOfRectangle * lengthOfRectangle;
        cout << endl << fixed << setprecision(9) << "The Area of the Rectangle is " << area << endl;
    }
    else if (whatIsThePoly == "Square" || whatIsThePoly == "square" || whatIsThePoly == "SQUARE") {
        cout << endl << "What is one length?" << endl;
        double lengthOfSquare;
        cin >> lengthOfSquare;
        cout << endl << fixed << setprecision(9) << "The Area of the Square is " << area::square(lengthOfSquare) << endl;
    }
    else if (whatIsThePoly == "Parallelogram" || whatIsThePoly == "parallelogram" || whatIsThePoly == "PARALLELOGRAM") {
        cout << endl << "What is the base of the parallelogram?" << endl;
        double baseOfParallelogram;
        cin >> baseOfParallelogram;
        cout << endl << "What is the height of the parallelogram?" << endl;
        double heightOfParallelogram;
        cin >> heightOfParallelogram;
        double area = baseOfParallelogram * heightOfParallelogram;
        cout << endl << fixed << setprecision(9) << "The area of the parallelogram is " << area << endl;
        
    }
    else if (whatIsThePoly == "Rhombus" || whatIsThePoly == "rhombus" || whatIsThePoly == "RHOMBUS"){
        cout << endl << "What is the length of one diagonal?" << endl;
        double lengthdia1;
        cin >> lengthdia1;
        cout << endl << "What is the length of the other diagonal?" << endl;
        double lengthdia2;
        cin >> lengthdia2;
        double area = (lengthdia1 * lengthdia2)/2;
        cout << endl << fixed << setprecision(9) << "The area of the rhombus is " << area << endl;
        
    }
    else if (whatIsThePoly == "Trapezoid" || whatIsThePoly == "trapezoid" || whatIsThePoly == "TRAPEZOID") {
        cout << endl << "What is the length of the shorter base?" << endl;
        double sbase;
        cin >> sbase;
        cout << endl << "What is the length of the longer base?" << endl;
        double lbase;
        cin >> lbase;
        cout << endl << "What is the height of the trapezoid?" << endl;
        double heightTrap;
        cin >> heightTrap;
        double area = ((sbase + lbase)/2) * heightTrap;
        cout << endl << fixed << setprecision(9) << "The area of the trapezoid is " << area << endl;
    }
    else if (whatIsThePoly == "Kite" || whatIsThePoly == "kite" || whatIsThePoly == "KITE"){
        cout << endl << "What is the length of one diagonal?" << endl;
        double lengthdia1;
        cin >> lengthdia1;
        cout << endl << "What is the length of the other diagonal?" << endl;
        double lengthdia2;
        cin >> lengthdia2;
        double area = (lengthdia1 * lengthdia2)/2;
        cout << endl << fixed << setprecision(9) << "The area of the kite is " << area << endl;
        
    }
    else if (whatIsThePoly == "Pentagon" || whatIsThePoly == "pentagon" || whatIsThePoly == "PENTAGON") {
        cout << endl << "What is the length of one side?" << endl;
        double lengthofsidepen;
        cin >> lengthofsidepen;
        double area = (lengthofsidepen * lengthofsidepen) * (1.0/4.0) * (sqrt(5 * (5 + (2 * (sqrt(5))))));
        cout << endl << fixed << setprecision(9) << "The area of the pentagon is " << area << endl;
    }
    else if (whatIsThePoly == "Hexagon" || whatIsThePoly == "hexagon" || whatIsThePoly == "HEXAGON") {
        cout << endl << "What is the length of one side?" << endl;
        double lengthofsidehex;
        cin >> lengthofsidehex;
        double area = (lengthofsidehex * lengthofsidehex) * ((3 * (sqrt(3)))/2);
        cout << endl << fixed << setprecision(9) << "The area of the hexagon is " << area << endl;
    }
    else if (whatIsThePoly == "Circle" || whatIsThePoly == "circle" || whatIsThePoly == "CIRCLE") {
        cout << endl << "With the radius or diameter?" << endl;
        string radiusORdiameter;
        cin >> radiusORdiameter;
        
        if (radiusORdiameter == "radius" || radiusORdiameter == "Radius" || whatIsThePoly == "RADIUS") {
            cout << endl << "What is the radius?" << endl;
            double radius;
            cin >> radius;
            cout << endl << fixed << setprecision(9) << "The Area of the Circle is " << area::radcircle(radius) << endl;
        }
        else if (radiusORdiameter == "diameter" || radiusORdiameter == "Diameter" || whatIsThePoly == "DIAMETER") {
            cout << endl << "What is the diameter of the circle?" << endl;
            double diameter;
            cin >> diameter;
            cout << endl << fixed << setprecision(9) << "The Area of the Circle is " << area::diacircle(diameter) << endl;
        }
    }
    else if (whatIsThePoly == "Polygon" || whatIsThePoly == "polygon" || whatIsThePoly == "POLYGON") {
        cout << endl << "A regular polygon?" << endl;
        string theyesorno;
        cin >> theyesorno;
        if (theyesorno == "Yes" || theyesorno == "yes" || theyesorno == "YES") {
            regularpolyfunc();
        }
        else if (theyesorno == "No" || theyesorno == "no" || theyesorno == "NO") {
            cout << endl << "Sorry but I can't do irregular polygons" << endl;
        }
        else {
            cout << endl << "That was a yes or no question." << endl;
        }
        
    }
    else {
        cout << endl << "Sorry that doesn't seem to be one of the areas I can do." << endl;
        cout << "Some areas I can do are: \n \nTriangle\nRectangle\nSquare\nParallelogram" << endl;
        cout << "Rhombus\nTrapezoid\nKite\nPentagon\nHexagon\nCircle\nPolygon" << endl;
    }
}




void regularpolyfunc() {
    cout << endl << "How many sides does the regular polygon have?" << endl;
    int numofsidesinpoly;
    cin >> numofsidesinpoly;
    
    cout << endl << "Length of one side?" << endl;
    double lengthofaside;
    cin >> lengthofaside;
    
    double interiorangles;
    interiorangles = (((numofsidesinpoly - 2) * 180)/static_cast<double>(numofsidesinpoly));
    
    double interiorradians = (M_PI/180.0) * interiorangles;
    
    double area = (numofsidesinpoly) * (0.5) * (lengthofaside) * ((lengthofaside/2.0) * tan(interiorradians/2.0));
    
    cout << endl << "The area of the polygon with " << numofsidesinpoly << " sides and " << lengthofaside;
    cout << fixed << setprecision(9)<< " side length is " << area << endl;
    
}



void volumefunc() {
    
    string whatIsTheSolid;
    cout << endl << "What 3dSolid do you want the volume for?" << endl;
    cin.ignore();
    getline(cin, whatIsTheSolid);
    

    if (whatIsTheSolid == "Rectangular Cuboid" || whatIsTheSolid == "rectangular cuboid" || whatIsTheSolid == "Rectangular cuboid" || whatIsTheSolid == "rectangular Cuboid") {
        cout << endl << "What is the height?" << endl;
        double height;
        cin >> height;
        cout << endl << "What is the length?" << endl;
        double length;
        cin >> length;
        cout << endl << "What is the width?" << endl;
        double width;
        cin >> width;
        double volume = height * length * width;
        cout << endl << fixed << setprecision(9) << "The volume of the Rectangular Cuboid is " << volume << endl;


    }


    else {
        cout << endl << "Sorry that doesn't seem to be one of the volumes I can do." << endl;
        cout << "Some volumes I can do are: \n \nRectangular Cuboid" << endl;
    }


}
