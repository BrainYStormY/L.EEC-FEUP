#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
struct Person {
    string name;
    int age;
    string country;
};

/*Function to import from a file to a vector of a struct
* @return 0 se a importação teve sucesso
* @return -1 se ocorrer um erro 
*/
int import(const string name_file, Person (&v)[10]){
    string name, age_str, country;
    int i = 0;
    ifstream fin(name_file);
    if(!fin) return -1;
    while(getline(fin, name, ',') && getline(fin, age_str, ',') && getline(fin, country)){
        if(name.length() == 0) return -1;
        v[i].name = name;
        if(stoi(age_str) <= 0) return -1;
        v[i].age = stoi(age_str);
        if(country.length() == 0) return -1;
        v[i].country = country;
        i++;
    }
    fin.close();
    return 0;
}

void print (Person (&v)[10])
{
    for(int i=0;i<10;i++)
    {
        cout << "Name= "<<v[i].name << "--- Age= "<< v[i].age << "--- Country= "<<v[i].country<<endl; 
    }
}

int main()
{
    Person vperson[10];
    int result;
    result=import("lista.txt",vperson);
    if (result==0)
    {
    print(vperson);
    } else
    {
        cout << "return: "<< result << endl;
    }
    result=import("",vperson);
    if (result==0)
    {
    print(vperson);
    } else
    {
        cout << "return: "<< result << endl;
    }
}