#include <iostream>
#include <vector>
using namespace std;

/*
int main()
{
    vector<int> my_vec(5); // init.size of 5 (use push_back member function if size is not specified)
    for(unsigned int i=0; i < 5; i++)
    {
        my_vec[i]= i+50;
    }  //50 51 52 53 54
       
    my_vec.push_back(10);
    my_vec.push_back(8);
    my_vec[0] = 30;
    //30 51 52 53 54 10 8
    
    unsigned int i;
    for(i=0; i < my_vec.size(); i++)
    {
        cout<< my_vec.at(i)<< " ";
    }
    cout << endl;

    int x = my_vec.back(); // gets back val i.e. 8
    x += my_vec.front(); // gets front val i.e. 30, x is now 38;
    cout<< "x is " << x << endl;

    my_vec.pop_back(); // 8 deletes
    for(i=0; i < my_vec.size(); i++)
    {
        cout<< my_vec.at(i)<< " ";
    }
    cout << endl;

    my_vec.erase(my_vec.begin() + 2);
    for(i=0; i < my_vec.size(); i++)
    {
        cout<< my_vec.at(i)<< " ";
    }
    cout << endl;

    my_vec.insert(my_vec.begin() + 1, 43);
    for(i=0; i < my_vec.size(); i++)
    {
        cout<< my_vec.at(i)<< " ";
    }
    cout << endl;    
    return 0;
}*/