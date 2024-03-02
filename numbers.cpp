#include <iostream>

using namespace std;

void sumOfIntegers()
{
    int n, sum = 0;
    // Asks user for an integer
    cout << "Enter an integer: ";
    // Stores the integer
    cin >> n;
    // Calculate the sum of integers up to the value entered (including)
    while(n > 0){
        sum += n;
        n--;
    }
    //  Print result.
    cout << "Result: " << sum << endl;
}

/**Test code. Do not change**/

int main() {

   sumOfIntegers();

    return 0;
}  
