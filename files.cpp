#include <iostream>
#include <fstream> 
#include <string>

using namespace std;


/**
 *  reads and prints the file f
 *  param: string f is the name of the file
 *  return: -1 if error, 0 if everything ok 
 */
int print_file(string f){
    string line;
    ifstream fin(f);
    if(!fin){
        return -1;
    }
    while(getline(fin, line)){
        cout << line << endl;
    }
    fin.close();
    return 0;
}

/**
 *  counts and prints the number of chars in file f
 *  param: string f is the name of the file
 *  return: -1 if error, 0 if everything ok 
 */
int count_characters(string f) {
    char ch;
    int charcount = 0;
    ifstream fin(f);
    if(!fin){
        return -1;
    }
    while(fin.get(ch)){
        charcount++;
    }
    fin.close();
    cout << "The total number of characters is " << charcount << endl;
    return 0;
}


/**Test code. Do not change**/

int main() {
	print_file("grocery_list.txt");
    count_characters("grocery_list.txt");
    return 0;
}

