#include<bits/stdc++.h>

using namespace std;

const int N = 2002;

int mmaze[N][N];

int main(){
    int n, m;
    cin >> n >> m;

    pair<int, int>src, dst;

    for(int i=0; i<n; i++){
        string input;
        cin >> input;
        for(int j=0; j<m; j++){
            if(input[j] == '#'){
                maze[i][j] = -1;
            }
            else if(input[i] == 'A'){
                src = {i, j};
            }
            else if(input[i] == 'B'){
                dst = {i, j};
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << maze[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

