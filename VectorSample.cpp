/*
It stores elements in contiguous memory locations.
Enables direct access to any element by using subscrpt[] operator
A vector can change its size, therefore memory is allocated at runtime.
*/
#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " , ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    vector<int> v1(10);
    vector<int> v2(10, 1);
    vector<int> v3(v2);

    cout << "Before inserting elements size : " << v.size() << endl;

    int x;
    cout << "Enter 5 int values" ;
    for (int i = 0; i < 5; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    cout << "Size after adding 5 elements : " << v.size() << endl;
    cout << "Display content : " << endl;
    display(v);

    v.push_back(6.6);

    cout << "size after push back : " << v.size() << endl;
    cout << "Display content : " << endl;
    display(v);

    vector<int>::iterator itr = v.begin();
    itr = itr + 3;//iterator points to 4th element
    v.insert(itr, 1, 9);
    cout << "Display content after insert: " << endl;
    display(v);

    //remove the 4h and 5th element
    v.erase(v.begin()+3, v.begin()+5);
    cout << "Display content after erase: " << endl;
    display(v);

    return 0;
}