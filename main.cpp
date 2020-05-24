#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int tests;
int pers;
vector<int> inexp;
int input;
int curr;
int groups;
int remain;

int main(){
    cin >> tests;
    for (int i = 0; i<tests; i++){
        groups = 0;
        remain = 0;
        inexp.clear();
        cin >> pers;
        for (int j=0; j<pers; j++){
            cin >> input;
            inexp.push_back(input);
        }
        sort(inexp.begin(),inexp.end());
        for (int a=0; a<pers; a+=0){
            curr = inexp[a];
            if(curr==inexp[a+curr-1] && a+curr <= inexp.size()){
                groups ++;
                a += curr;
            }else if(remain + 1 == curr){
                remain = 0;
                groups ++;
                a ++;
            }else{
                remain ++;
                a ++;
            }
        }
        cout << groups << endl;
    }
    return 0;
}
