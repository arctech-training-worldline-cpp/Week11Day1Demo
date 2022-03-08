#include <iostream>
#include <vector>

using namespace std;

class student
{
    public:
    string name;
    int age;

    
        student(string nvale, int ageVal) : name(nvale), age(ageVal)
        {            
            cout << "Inside constructor" << endl;
        }
        student(const student &other) : name(other.name), age(other.age)
        {
            cout << "Inside copy constructor"  << endl;
        }

};

int main()
{
    vector<student> students1;
    // cout << "emplace_back" << endl;
    // students1.emplace_back("Sudhanya", 40);

    cout << "Push Back" << endl;

    student st = student("chatterjee", 40);
    students1.push_back(st);


    return 0;
}