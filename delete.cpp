#include <iostream> 
#include <cstring>  
#include <cstdlib>  
#include <vector>   
#include "menu.h"
   
using namespace std;

bool delet(vector<Pilmat> &ob)//Функция удаления
{
        bool kont = false;
        string tmp;
        int i,num, index=-1;
        cout<<"Введите номер удаляемой продукции >>";
        cin>>num;

                if(cin.fail())
                {
                cin.clear();
                getline(cin,tmp);
                cout<<"\nНомер задается числом! Введите число!";
                }
                 
        for(i=0;i<ob.size();i++)
        {
                if(ob[i].numerr()==num)
                {
                kont=true;
                cout<<endl;
                index=i;   
                break;     
                }
        }

        if(index!=-1)

        {
                for(i=index;i<ob.size()-1;i++)
                {
                        ob[i]=ob[i+1];
                }       ob.pop_back();
        }
        cout<<"<<Элемент удалён>>\n";

        if(!kont) cout << "Нет продукции с таким номером\n";
        return true;
}
