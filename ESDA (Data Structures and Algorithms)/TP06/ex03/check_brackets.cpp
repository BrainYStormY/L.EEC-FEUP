/*****************************************************************/
/*                       Stack | EDA | LEEC                      */
/*****************************************************************/

#include <iostream>
#include <string>
#include <stack>

using namespace std;

/** 
 *  @brief  Check if all brackets (round, curly or square) in an expression are balanced.
 *  @param  expression String to be evaluated.
 *  @return 0 if all brackets are balanced | -1 if not all brackets are balanced | -2 if an error occurs | -3 if no brackets are present
 *  @note   Use a STACK to solve the problem.
 */
int checkBracketsBalanced(string expression)
{
    if(expression.empty()) return -2;

    int C1, C2, S1, S2, F1, F2;
    C1 = C2 = S1 = S2 = F1 = F2 = 0;
    stack<char> stk;

    for(char ch : expression){
        stk.push(ch);
    }

    while(!stk.empty()){
        switch (stk.top()){
            case 41:
                C2++;
                break;

            case 93:
                S2++;
                break;

            case 125:
                F2++;
                break;

            case 40:
                C1++;
                break;

            case 91:
                S1++;
                break;

            case 123:
                F1++;
                break;
        }

        if(C1 > C2 || S1 > S2 || F1 > F2) return -1;

        stk.pop();
    }
    
    if(C2 == 0 && S2 == 0 && F2 == 0) return -3;

    if(C1 != C2 || S1 != S2 || F1 != F2) return -1;

    return 0;
}

/* !!! Do not change !!! */

/** 
 *  @brief  Print a message according to the return value of 'checkBracketsBalanced'.
 *  @param  result Returned value.
 *  @return void
 */
void printResultCheckBalancedBrackets(int result)
{
    if (result == 0) cout << "All brackets are balanced.\n";
    else if (result == -1) cout << "Brackets not balanced.\n";
    else if (result == -2) cout << "An error has occurred!\n";
    else if (result == -3) cout << "No brackets present!\n";
}

int main()
{
    string test;

    cout << "--- Testing function <checkBracketsBalanced> ---\n\n";

    test = "[]";
    cout << test << endl;
    printResultCheckBalancedBrackets(checkBracketsBalanced(test));

    cout << "-------------------\n\n";

    test = "[](){}";
    cout << test << endl;
    printResultCheckBalancedBrackets(checkBracketsBalanced(test));

    cout << "-------------------\n\n";

    test = "dfgh(jyt";
    cout << test << endl;
    printResultCheckBalancedBrackets(checkBracketsBalanced(test));

    cout << "-------------------\n\n";

    test = "098uj";
    cout << test << endl;
    printResultCheckBalancedBrackets(checkBracketsBalanced(test));

    cout << "-------------------\n\n";

    test = "";
    cout << test << endl;
    printResultCheckBalancedBrackets(checkBracketsBalanced(test));

    cout << "-------------------\n\n";

    test = "#include <iostream>\nusing namespace std;\nint main()\n{\n\tint n = 0;\n\tcin >> n;\n\tif n % 2) \n\t\tcout << \"Odd number\" << endl;\n\t}\n}";
    cout << test << endl;
    printResultCheckBalancedBrackets(checkBracketsBalanced(test));

    cout << endl;

    return 0;
}