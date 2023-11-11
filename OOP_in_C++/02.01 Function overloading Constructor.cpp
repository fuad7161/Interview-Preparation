#include <bits/stdc++.h>
#include<cstdio>
#include<iostream>
using namespace std;

class date{
    int day,month,year;
    public:
    date(char *d);
    date(int m,int d,int y);
    void show();
};

date::date(char *d){
    sscanf(d, "%d%*c%d%*c%d", &month,&day,&year);
}

date::date(int m,int d,int y){
    day = d; month = m; year = y;
}

void date::show(){
    cout<<month<<"/"<<day<<"/"<<year<<endl;
}

int main(){
    
    date ob1(10,11,23);
    date ob2("10/11/23");

    ob1.show();
    ob2.show();
    
    return 0;
}