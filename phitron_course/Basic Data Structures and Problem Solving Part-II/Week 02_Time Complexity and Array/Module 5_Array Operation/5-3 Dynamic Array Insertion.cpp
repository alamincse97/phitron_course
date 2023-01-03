/*
Time Complexity: Push_back() ->
Memory Complexity: all class -> O(1)
*/
#include<bits/stdc++.h>

using namespace std;

//Memory Complexity O(n)
//v.insert(v.begin()+i)
class Array{
private:
    int* arr;
    int cap;
    int sz;

    void Increase_size()
    {
        cap = cap*2;
        int *tmp = new int[cap];
        for(int i=0; i<sz; i++)
        {
            tmp[i] = arr[i];
        }
        delete [] arr;
        arr = tmp;
    }
public:
    Array()
    {
        arr = new int[1];
        cap = 1;
        sz = 0;
    }
    // Time Complexity O(1)
    void Push_back(int x)
    {
        if(cap == sz)
        {
            Increase_size();
        }
        arr[sz] = x;
        sz++;
    }
    //O(sz-pos) O(sz)
    void Insert(int pos, int x)
    {
        if(cap == sz)
        {
            Increase_size();
        }
        for(int i=sz-1; i>=pos; i--)
        {
           arr[i+1] = arr[i];
        }
        arr[pos] = x;
        sz++;
    }
    // O(sz)
    void Print()
    {
        for(int i=0; i<sz; i++)
        {
           cout << arr[i] << " ";
        }
        cout << "\n";
    }
    //O(1)
    int getSize()
    {
        return sz;
    }
    //O(1)
    int getElement(int idx)
    {
        if(idx >= sz)
        {
          cout << "Error " << idx << " is out of bound!\n";
          return -1;
        }
        return arr[idx];
    }
};

int main()
{
    Array a;
    a.Push_back(10);
    a.Push_back(20);
    a.Push_back(30);
    a.Push_back(40);
    a.Push_back(50);
    a.Insert(1, 5);

    a.Print();

    cout << a.getSize() << "\n";

    for(int i=0; i<a.getSize(); i++)
    {
        cout << a.getElement(i) << "\n";
    }
    return 0;
}
