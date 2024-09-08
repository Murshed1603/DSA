//#include<iostream>
//#include<vector>
#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &v)
{
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(void)
{
    vector<int> vec1;
    int element, size;
    
    cout << "Enter the size of your vector: ";
    cin >> size;
    
    for(int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this vector: ";
        cin >> element;
        vec1.push_back(element);
    }
    
    // Comment out this line if you don't want to remove the last element
     // vec1.pop_back(); 
     display(vec1);
     vector<int> :: iterator iter = vec1.begin();
     //vec1.insert(iter+3, 566);
     vec1.insert(iter+1,4, 566); //the 4 here will print four 566s
    
    display(vec1);

    return 0;
}
