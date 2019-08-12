#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
int N, temp;
vector<int> v;
cin >> N;

for(int i = 0; i < N; i++){
    cin >> temp;
    v.push_back(temp);
}

cin >> temp;    
if( temp < v.size() )
    v.erase(v.begin() + temp - 1); 

int a, b;
cin >> a >> b;    

if( a < b   &&    b < v.size() )
    v.erase(v.begin() + a - 1, v.begin() + b - 1);

cout << v.size() << endl;
//for(auto _v : v)
 //   cout << _v << " ";
//cout << endl;
for(vector<int>::iterator i = v.begin(); i < v.end(); i++){
    cout << *i<< " ";
}
return 0;
}
