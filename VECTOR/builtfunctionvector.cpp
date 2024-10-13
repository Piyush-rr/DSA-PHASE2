#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char>vac={'a','b','c'};

    cout<<"size :"<<vac.size()<<endl;

    vac.push_back('r');
    vac.push_back('a');
     vac.push_back('d');
    vac.push_back('e');



    for(char val:vac){
        cout<<val<<endl;
    }
    return 0;
}


//vector function

/*
 size
 push_back
 pop_back
 front
 back
 at
 */