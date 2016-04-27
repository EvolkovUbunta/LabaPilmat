#include <iostream> 
#include <cstring>  
#include <cstdlib>  
#include <vector>   
#include "menu.h"
   
using namespace std;

int Zagruz(vector<Pilmat> &ob)//Функция добавления
{       
        int a;
        char *k2=new char[100],*k3=new char[100];
        float z,n,v,l,y;
        cout<<"Укажите данные!\n";
        cout<<"^^^^^^^^^^^^^^^\n";

        while(1){
        cout<<"Введите номер счёта в списке"<<">>";
        cin>>a;
        if (a>0) break;
        };
          
        while(1){
        cout<<"Введите породу древесины"<<">>";
        cin.getline(k2,100);
        cin.getline(k2,100);
        if (strlen(k2)>2)break;
        };

        while(1){
        cout<<"Введите тип древесины"<<">>";
        cin.getline(k3,100);
        if (strlen (k3)>2)break;
        };

        while(1){
        cout<<"Введите обьём древесины, имеющийся на складе(м^3)"<<">>";
        cin>>z;
        if (z>1)break;
        };

	while(1){
        cout<<"Введите обьём древесины, который необходимо обработать(м^3)"<<">>";
        cin>>v;
        if (v>1)break;
        };

        while(1){
        cout<<"Введите производственные затраты на обработку 1 м^3 древесины(руб)"<<">>";
        cin>>n;
        if (n>1)break;
        };

        while(1){
        cout<<"Введите время на производсвто 1 м^3 древесины(час)"<<">>";
        cin>>l;
        if (l>1)break;
        };
          
        while(1){
        cout<<"Введите обьем древесины,полученный в результате обработки(м^3)"<<">>";
        cin>>y;
        if (y>1)break;
        };
        ob.push_back(Pilmat(a,k2,k3,z,v,n,l,y));
        return 1;
};
