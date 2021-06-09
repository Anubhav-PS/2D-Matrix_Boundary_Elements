#include <iostream>
using namespace std;

//code by Anubhav.P.S
// display the boundary elements
void display_boundary_elements();

// 2D matrix row and column size 
const int m{ 4 }, n{ 5 };
// 2D matrix 
int matrix[m][n] = { {1,  2,  3,  4, 50},                          //global 2d array variable
        {5,  6,  7,  8, 60},
        {9,  10, 11, 12, 70},
        {13, 14, 15, 16, 80}
};

int main()
{
    cout << "------code by anubhav_p_s------\n";
    cout << "Displaying the matrix....\n" << endl;
    //display the matrix
    for (int i = 0; i < 4; i++) {
        //code by Anubhav.P.S
        for (int j = 0; j < 5; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "\nDisplaying the boundary elements clockwise.....\n" << endl;
    display_boundary_elements();
    //code by Anubhav.P.S
    cout << "------code by anubhav_p_s------\n";
    return 0;
    //code by Anubhav.P.S
}

void display_boundary_elements() {                     
    int turn = 1;
    int i{ 0 }, j{ 0 };
    while (turn < 3) {
        //code by Anubhav.P.S
        while (turn == 2 ? j > 0:j < n) {
            cout << matrix[i][j] << "\n";
            //code by Anubhav.P.S
            if (turn == 2)
                j--;
            else
                j++;
        }
        if (turn != 2) {
            j -= 1; i += 1;
            //code by Anubhav.P.S
        }
        while (turn == 2 ? i > 0:i < m) {
            cout << matrix[i][j] << "\n";
            if (turn == 2)
                i--;
            else
                i++;
        }
        //code by Anubhav.P.S
        j -= 1;
        i -= 1;
        turn++;
    }
    //code by Anubhav.P.S
}