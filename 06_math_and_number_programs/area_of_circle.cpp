#include <iostream>
using namespace std;

float circle(int radius) {
    float a = 1;
    int r = 2;
    while (r > 0) {
        a = a * radius;
        r--;
    }
    float area = 3.14 * a;
    return area;
}
int main() {
    float radius;
    cout << "Enter radius: ";
    cin >> radius;
    cout << "Area = " << circle(radius);
    return 0;
}