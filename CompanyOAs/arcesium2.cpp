/* Santa and Banta are playing a game where they are standing on an X-Y plane. Initially Santa is standing at (0,0) and Banta is standing at (X,Y), Santa wants to catch Banta in as few steps as possible, can you help Santa catch Banta with following conditions?
On ith turn Santa can choose to move either Up, Down,Left or Right direction. Which ever direction Santa chooses, he needs to move 2^(i-1) units in that direction.
For X=2 and Y=3 the correct output should be "DRU".
*/
#include <iostream>
#include <cmath>

using namespace std;

string canSantaCatchBanta(int X, int Y) {
    string steps = "";
    int x = 0, y = 0;
    int i = 1;
    
    while (x!=X && y!=Y) {
        int xDiff = X - x;
        int yDiff = Y - y;
        
        if (abs(xDiff) >= abs(yDiff)) { // Modified condition here
            if (xDiff > 0) {
                x += pow(2, i-1);
                steps += "R";
          
            } else {
                x -= pow(2, i-1);
                steps += "L";
   
            }
        } else {
            if (yDiff > 0) {
                y += pow(2, i-1);
                steps += "U";
 
            } else {
                y -= pow(2, i-1);
                steps += "D";
            }
        }
        
        i++;
    }
    if(steps.length()==0) steps+="Not Possible";
    return steps;
}

int main() {
    int X = 2, Y = 3;
    string steps = canSantaCatchBanta(X, Y);
    cout << "Steps for Santa to catch Banta: " << steps << endl;

    return 0;
}
