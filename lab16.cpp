#include <iostream>
#include <iomanip>
#include <vector>
#include <array>
#include <fstream>
using namespace std;

// create the class here
class Color {
private:
    int r;
    int g;
    int b;

    // now we must call for these using getters and setters
    public:
    Color() { r = 0; g = 0; b = 0; } // default constructor
    Color(int red) {r = red; g = 0; b = 0;} // parital constructor
    Color(int red, int green, int blue) {r = red; g = green; b = blue;} // full constructor

    int getRed() { return r; }
    void setRed(int rd) { r = rd; }

    int getGreen() { return g; }
    void setGreen(int gr) { g = gr; }

    int getBlue() { return b; }
    void setBlue(int bl) { b = bl; }


// this is to print the values

    void print() { 
    cout << setw(15) << "Red: " << r << endl;
    cout << setw(15) << "Green: " << g << endl;
    cout << setw(15) << "Blue: " << b << endl;
}

};


int main() {
    Color c1;
    cout << c1.getRed() << " " << c1. getGreen() << " " << c1.getBlue() << endl; // prints default constructor
    c1.print();


    Color c2(150); // call partial constructor here (only red value because thats what we passed in)
    cout << c2. getGreen() << " " << c2.getBlue() << endl; 
    c2.print();
    cout << endl;

    Color c3 (100, 200, 230); // call full constructor here
    c3.print();
    cout << endl;

    return 0;


}
    