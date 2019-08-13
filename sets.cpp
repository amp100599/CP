#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin >> q;
    set<int>s;
    for(int i=1;i<=q;i++){
      int type,n;
      cin >> type >> n;
      if(type==1){
        s.insert(n);
      }
      else if(type==2){
        s.erase(n);
      }
      else if(type==3){
        set<int>::iterator itr=s.find(n);
        if(itr!=s.end()){
          cout << "Yes"<< " "<< '\n';
        }
        else{
          cout << "No"<< " "<< '\n';
        }
      }
    }

    return 0;
}
