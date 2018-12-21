#include <iostream>
#include <map>
#include <string>
#include <stdio.h>
using namespace std;
int main (){
    // pair<int,string> myPair(0 , "Nhan") ;
    // cout << myPair.first << " " << myPair.second;
    map<int , int> myMap , thirtMap , secondMap;
    for (int i = 0 ; i < 4 ; i ++) secondMap[i] = i + 1;
    for (int i =  4 ; i < 8 ; i ++) myMap[i + 10] = i + 10;
    
    
    //thirtMap = secondMap ;
    //cout << secondMap.size();
    // map<int,int>::iterator i;
    // for (i = myMap.end() ; i != myMap.begin(); i --){
    //     secondMap.insert(secondMap.begin(),*i);
    // }
    //secondMap.insert(myMap.begin(),myMap.end());

    //cout << secondMap.size();
    // for (int j = 0 ; j < secondMap.size() ; j ++) cout << secondMap.at(j);
    pair <int ,int> tmp (myMap.begin()->first , myMap.begin()->second );
    map<int,int>::iterator index;
    secondMap.insert(tmp);
    index = secondMap.begin();
    //cout << secondMap[2];
    //index = secondMap.find(0);
    secondMap.erase( secondMap.find(1));

    for ( index = secondMap.begin() ; index != secondMap.end() ; index ++) {
        cout << index->first <<", "<< index->second << endl ;
    }
    
}