#include<bits/stdc++.h>

using namespace std;

int main()
{
    //string s = "I am eating rice.";
    //string s2 = "I am also eating dal.";

    /*size()

    cout << s.size() << "\n";

     A --> B
     B --> C


    string s3 = "I am eating rice. I am also eating dal.";

    cout << s[0] << "\n";
    cout << s[1] << s[2] << "\n";

    string s3 = s + s2;
    cout << s3 << "\n";
    */

    /*
    for(int i=0; i<s.size(); i++)
    {
        s[i] = s[i] + 1; // 'a' + 1 = 'b'
    }
    cout << s << "\n";
    */

    // last character delete
   // s.pop_back();
    //cout << s << "\n";

    // fast character delete

   // string s = "abcdefg";

    //s.erase(s.begin() + 1);
    //cout << s << "\n";

    //fast character and last character delete

    string s;
    cin >> s;
    //getline(cin, s);

    s.erase(s.begin());
    //last character delte
    //s.erase(s.begin() + s.size() - 1);
    s.pop_back();
    cout << s << "\n";

    return 0;
}
