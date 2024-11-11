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

namespace thestringanswer {

    void trianglesim( double triA);
    void rectanglesim( double recA);
    void squaresim( double squA);
    void parallelogramsim( double parA);
    void trapezoidsim( double traA);
    void kitesim( double kitA);
    void pentagonsim( double penA);
    void hexagonsim( double hexA);
    void diacirclesim( double diaA);
    void radcirclesim( double radA);
    void rhombussim( double rhoA);

}

namespace area {
    
    double square();
    double diacircle();
    double radcircle();
    double triangle();
    double rectangle();
    double parallelogram();
    double rhombus();
    double trapezoid();
    double kite();
    double pentagon();
    double hexagon();
    void polygon(double &polA, int &numofsidesinpoly, double &lengthofaside);

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
        thestringanswer::trianglesim(area::triangle());
    }
    else if (whatIsThePoly == "Rectangle" || whatIsThePoly == "rectangle" || whatIsThePoly == "RECTANGLE") {
        thestringanswer::rectanglesim(area::rectangle());
    }
    else if (whatIsThePoly == "Square" || whatIsThePoly == "square" || whatIsThePoly == "SQUARE") {
        thestringanswer::squaresim(area::square());
    }
    else if (whatIsThePoly == "Parallelogram" || whatIsThePoly == "parallelogram" || whatIsThePoly == "PARALLELOGRAM") {
        thestringanswer::parallelogramsim(area::parallelogram());
        
    }
    else if (whatIsThePoly == "Rhombus" || whatIsThePoly == "rhombus" || whatIsThePoly == "RHOMBUS"){
        thestringanswer::rhombussim(area::rhombus());
        
    }
    else if (whatIsThePoly == "Trapezoid" || whatIsThePoly == "trapezoid" || whatIsThePoly == "TRAPEZOID") {
        thestringanswer::trapezoidsim(area::trapezoid());
    }
    else if (whatIsThePoly == "Kite" || whatIsThePoly == "kite" || whatIsThePoly == "KITE"){
        thestringanswer::kitesim(area::kite());
        
    }
    else if (whatIsThePoly == "Pentagon" || whatIsThePoly == "pentagon" || whatIsThePoly == "PENTAGON") {
        thestringanswer::pentagonsim(area::pentagon());
    }
    else if (whatIsThePoly == "Hexagon" || whatIsThePoly == "hexagon" || whatIsThePoly == "HEXAGON") {
        thestringanswer::hexagonsim(area::hexagon());
    }
    else if (whatIsThePoly == "Circle" || whatIsThePoly == "circle" || whatIsThePoly == "CIRCLE") {
        cout << endl << "With the radius or diameter?" << endl;
        string radiusORdiameter;
        cin >> radiusORdiameter;
        
        if (radiusORdiameter == "radius" || radiusORdiameter == "Radius" || whatIsThePoly == "RADIUS") {
            thestringanswer::radcirclesim(area::radcircle());
        }
        else if (radiusORdiameter == "diameter" || radiusORdiameter == "Diameter" || whatIsThePoly == "DIAMETER") {
            thestringanswer::diacirclesim(area::diacircle());
        }
    }
    else if (whatIsThePoly == "Polygon" || whatIsThePoly == "polygon" || whatIsThePoly == "POLYGON") {
        cout << endl << "A regular polygon?" << endl;
        string theyesorno;
        cin >> theyesorno;
        if (theyesorno == "Yes" || theyesorno == "yes" || theyesorno == "YES") {
            double polA, lengthofaside;
            int numofsidesinpoly;
            area::polygon(polA, numofsidesinpoly, lengthofaside);
            cout << endl << "The area of the polygon with " << numofsidesinpoly << " sides and " << lengthofaside;
            cout << fixed << setprecision(9)<< " side length is " << polA << endl;
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


namespace thestringanswer {

    void trianglesim( double triA) {
        cout << endl << fixed << setprecision(9) << "The area of the triangle is " << triA << endl;
    }
    void rectanglesim( double recA) {
        cout << endl << fixed << setprecision(9) << "The area of the rectangle is " << recA << endl;
    }
    void squaresim( double squA) {
        cout << endl << fixed << setprecision(9) << "The area of the square is " << squA << endl;
    }
    void parallelogramsim( double parA) {
        cout << endl << fixed << setprecision(9) << "The area of the parallelogram is " << parA << endl;
    }
    void trapezoidsim( double traA) {
        cout << endl << fixed << setprecision(9) << "The area of the trapezoid is " << traA << endl;
    }
    void kitesim( double kitA) {
        cout << endl << fixed << setprecision(9) << "The area of the kite is " << kitA << endl;
    }
    void pentagonsim( double penA) {
        cout << endl << fixed << setprecision(9) << "The area of the pentagon is " << penA << endl;
    }
    void hexagonsim( double hexA) {
        cout << endl << fixed << setprecision(9) << "The area of the hexagon is " << hexA << endl;
    }
    void diacirclesim( double diaA) {
        cout << endl << fixed << setprecision(9) << "The area of the circle is " << diaA << endl;
    }
    void radcirclesim( double radA) {
        cout << endl << fixed << setprecision(9) << "The area of the circle is " << radA << endl;
    }
    void rhombussim( double rhoA) {
        cout << endl << fixed << setprecision(9) << "The area of the rhombus is " << rhoA << endl;
    }



}


namespace area {
    
    double square() {
        cout << endl << "What is one length?" << endl;
        double lengthOfSquare;
        cin >> lengthOfSquare;
        return lengthOfSquare * lengthOfSquare;
    }

    double diacircle() {
        cout << endl << "What is the diameter of the circle?" << endl;
        double diameter;
        cin >> diameter;
        double radius = diameter/2.0;
        return radius * radius * M_PI;
    }
    
    double radcircle() {
        cout << endl << "What is the radius?" << endl;
        double radius;
        cin >> radius;
        return radius * radius * M_PI;
    }
    
    double triangle() {
        cout << endl << "What is the base?" << endl;
        double baseOfTriangle;
        cin >> baseOfTriangle;
        cout << endl << "What is the height?" << endl;
        double heightOfTriangle;
        cin >> heightOfTriangle;
        return baseOfTriangle * heightOfTriangle * 0.5;
    }

    double rectangle() {
        cout << endl << "What is the width?" << endl;
        double widthOfRectangle;
        cin >> widthOfRectangle;
        cout << endl << "What is the lenght?" << endl;
        double lengthOfRectangle;
        cin >> lengthOfRectangle;
        return widthOfRectangle * lengthOfRectangle;
    }

    double parallelogram() {
        cout << endl << "What is the base of the parallelogram?" << endl;
        double baseOfParallelogram;
        cin >> baseOfParallelogram;
        cout << endl << "What is the height of the parallelogram?" << endl;
        double heightOfParallelogram;
        cin >> heightOfParallelogram;
        return baseOfParallelogram * heightOfParallelogram;
    }

    double rhombus() {
        cout << endl << "What is the length of one diagonal?" << endl;
        double lengthdia1;
        cin >> lengthdia1;
        cout << endl << "What is the length of the other diagonal?" << endl;
        double lengthdia2;
        cin >> lengthdia2;
        return (lengthdia1 * lengthdia2)/2.0;
    }

    double trapezoid() {
        cout << endl << "What is the length of the shorter base?" << endl;
        double sbase;
        cin >> sbase;
        cout << endl << "What is the length of the longer base?" << endl;
        double lbase;
        cin >> lbase;
        cout << endl << "What is the height of the trapezoid?" << endl;
        double heightTrap;
        cin >> heightTrap;
        return ((sbase + lbase)/2.0) * heightTrap;
    }

    double kite() {
        cout << endl << "What is the length of one diagonal?" << endl;
        double lengthdia1;
        cin >> lengthdia1;
        cout << endl << "What is the length of the other diagonal?" << endl;
        double lengthdia2;
        cin >> lengthdia2;
        return (lengthdia1 * lengthdia2)/2.0;
    }

    double pentagon() {
        cout << endl << "What is the length of one side?" << endl;
        double lengthofsidepen;
        cin >> lengthofsidepen;
        return (lengthofsidepen * lengthofsidepen) * (1.0/4.0) * (sqrt(5 * (5 + (2 * (sqrt(5))))));
    }

    double hexagon() {
        cout << endl << "What is the length of one side?" << endl;
        double lengthofsidehex;
        cin >> lengthofsidehex;
        return (lengthofsidehex * lengthofsidehex) * ((3 * (sqrt(3)))/2);
    }

    void polygon(double &polA, int &numofsidesinpoly, double &lengthofaside) {
        cout << endl << "How many sides does the regular polygon have?" << endl;
        int numofsidesinpoly;
        cin >> numofsidesinpoly;
    
        cout << endl << "Length of one side?" << endl;
        double lengthofaside;
        cin >> lengthofaside;
    
        double interiorangles;
        interiorangles = (((numofsidesinpoly - 2) * 180)/static_cast<double>(numofsidesinpoly));
    
        double interiorradians = (M_PI/180.0) * interiorangles;
    
        double polA = (numofsidesinpoly) * (0.5) * (lengthofaside) * ((lengthofaside/2.0) * tan(interiorradians/2.0));
    }
}