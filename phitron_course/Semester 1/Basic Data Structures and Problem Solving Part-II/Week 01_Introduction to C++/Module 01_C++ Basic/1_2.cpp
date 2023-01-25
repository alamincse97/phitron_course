#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream of;
    of.open("1.txt");

    ofstream of2;
    of.open("2.txt");

    ifstream ifs;

    ifs.open("0.txt");
    int x;
    double y, z;
    ifs >> x >> y >> z;

    cout << x << " " << y << " " << z << "\n";

    //of<<"hello world\n";
    //of2<<"Hello OF2\n"

    return 0;
}
