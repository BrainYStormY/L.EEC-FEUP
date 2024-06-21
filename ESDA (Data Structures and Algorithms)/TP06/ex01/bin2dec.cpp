/*****************************************************************/
/*                      Stack | EDA | LEEC                       */
/*****************************************************************/

#include <iostream>
#include <string>
#include <cmath>
#include <stack>

using namespace std;

/** 
 *  @brief  Binary to decimal converter.
 *  @param  n_binary Binary number to be converted.
 *  @return Decimal number conversion.
 */
int bin2dec(string n_binary)
{
    int dec = 0, x = 0;
    stack<char> stk;

    for(size_t i = 0; i < n_binary.length(); i++)
    {
        stk.push(n_binary[i]);
    }

    while(!stk.empty())
    {
        dec += (stk.top() - '0') * pow(2, x++);
        stk.pop();
    }

    return dec;
}

// Do not change
int main()
{
    string n_binario;

    cout << "Enter a binary number: ";
    getline(cin, n_binario);

    cerr << "Converted number in decimal: " << bin2dec(n_binario) << endl;

    return 0;
}
