#include <iostream>
#include "arraylist.h"
#include <string>

using namespace std;

int main(){
    arraylist<string> arrName;

    arrName.add(1,"Black");
    arrName.add(2,"White");
    arrName.add(3,"Red");
     arrName.add("Orange");
    arrName.add(4,"Yellow");
    arrName.add(5,"Pink");
    cout<<"Cantidad de elementos: "<<arrName.size()<<endl;
    arrName.remove(1);
    cout<<"Cantidad de elementos: "<<arrName.size()<<endl;
    cout<<"Se encuentra el elemento V(1)- F(0) "<<arrName.contains("Red")<<endl;
    cout<<"Primera concurrencia: "<<arrName.indexOf("Pink")<<endl;
    cout<<"Ultima concurrencia: "<<arrName.lastindexof("Red")<<endl;
    for(int i=0;i<=arrName.size();i++){
        cout<<*arrName.get(i)<<endl;}
    cout<<"Es vacio?"<<arrName.isempty();
    return 0;}
