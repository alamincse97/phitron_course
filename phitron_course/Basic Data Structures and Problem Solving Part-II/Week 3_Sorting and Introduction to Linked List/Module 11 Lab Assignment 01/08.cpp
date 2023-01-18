#include <bits/stdc++.h>

using namespace std;

vector<int> even_generator(const vector<int> &v)
{
    vector<int> evens;
    for (int i : v)
    {
        if (i % 2 == 0)
        {
            evens.push_back(i);
        }
    }
    return evens;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    vector<int> evens = even_generator(nums);
    for (int i : evens)
    {
        cout << i << " ";
    }
    return 0;
}

