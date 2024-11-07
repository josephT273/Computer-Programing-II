/**
 * @brief Determines the quadrant of a given angle in a 2D coordinate system.
 *
 * This function prompts the user to enter an angle, normalizes it to the range
 * 0-360 degrees, and then outputs which axis or quadrant the angle corresponds to.
 *
 * @return Integer indicating program exit status (0 for success).
 */

#include <iostream>

using namespace std;
int main(){
    int angle;
    cout << "Enter angle(range 0-360): ";
    cin >> angle;

    if(angle > 360 || angle < -360){
        angle = angle % 360;
    }

    if (angle < 0) {
        angle += 360;
    }

    if (angle >= 0) {
        cout << "+ve X-axis";
    }else if (angle >= 90) {
        cout << "+ve Y-axis";
    }else if (angle >= 180) {
        cout << "-ve X-axis";
    }else if (angle >= 270 || angle <= 360) {
        cout << "-ve Y-axis";
    }else{
        cout << "Out of range";
    }

    return 0;
}

