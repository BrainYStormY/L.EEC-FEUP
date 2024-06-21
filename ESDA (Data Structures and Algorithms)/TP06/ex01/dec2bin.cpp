/*****************************************************************/
/*                      Stack | EDA | LEEC                       */
/*****************************************************************/

#include <iostream>
#include <string>
#include <cmath>
#include <stack>

using namespace std;

/** 
 *  @brief  Decimal to binary converter.
 *  @param  n_decimal Integer to be converted.
 *  @return Binary number conversion.
 */
string dec2bin(int n_decimal)
{
    string bin;
    stack<string> stk;

    while(n_decimal != 1)
    {
        if(n_decimal % 2 == 1) stk.push("1");
        else stk.push("0");

        n_decimal /= 2;
    }
    stk.push("1");

    while(!stk.empty())
    {
        bin += stk.top();
        stk.pop();
    }

    return bin;
}

// Do not change
int main()
{
    string n_dec;

    cout << "Enter an integer: ";
    getline(cin, n_dec);

    cerr << "Converted number in binary: " << dec2bin(stoi(n_dec)) << endl;

    return 0;
}
