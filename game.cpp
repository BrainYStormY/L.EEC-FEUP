#include <iostream>
#include <cstdlib>
using namespace std;

/*
Game to match a number between 1 and 100

tip: use rand() to generate random numbers, remember that rand() generates numbers 
between 0 and RAND_MAX. To initialize rand, use srand (time(NULL));
*/


int main() {
   
/*make the code here*/
    int num, guess, attempt = 0;
    srand(time(NULL));
    num = rand() % 100 + 1;
    cout << "Try to guess a number from 1 to 100" << endl;
    do{
        cout << "Guess the number: ";
        cin >> guess;
        if(guess < num){
            cout << "The number you are looking for is greater" << endl;
        }
        if(guess > num){
            cout << "The number you are looking for is smaller" << endl;
        }
        attempt++;
    }while(guess != num);
    cout << "Got it right in " << attempt << " attempts" << endl;
    return 0;
}  
