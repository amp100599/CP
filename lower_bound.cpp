#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size;
    cin >> size;
    vector <int>v;
    for(int i =1;i<=size;i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    int q;
    cin >> q;
    for (int i=1;i<=q;i++){
        int s;
        cin >> s;
        std::vector<int>::iterator it;
        it = std::find(v.begin(),v.end(),s);
          if(it != v.end()){
            std::cout << "Yes"<< " "<< it -v.begin()+1 << '\n';
            }
          else{
            std::vector<int>::iterator low;
            low = std::lower_bound(v.begin(), v.end(), s);
            std::cout << "No"<< " "<<(low-v.begin()+1)<< '\n';

          }


    }
    return 0;
}
