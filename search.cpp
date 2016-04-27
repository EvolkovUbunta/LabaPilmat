#include <iostream>
#include <cstring>
#include <cstdlib>
#include <vector>
#include "menu.h"

using namespace std;

bool Search(vector<Pilmat> &ob)//Функция поиска
{
        bool kont;
        string tmp;
        string typ;
        string nam;
        int i;
        float vo1,vo2,cos,tim,vo3;
        int num;
                cout<<"\t\t Поиск\n";
                cout<<"\t\t ^^^^^\n";
                cout<<"\t[Где вы хотите искать?]\n";
                cout<<"1. Номер в списке\n";   
                cout<<"2. Порода древесины \n";
                cout<<"3. Тип древесины \n";   
                cout<<"4. Обьём древесины, имеющийся на складе(м^3)\n";
                cout<<"5. Обьём древесины, который необходимо обработать(м^3)\n";
                cout<<"6. Себестоимость производства 1 м^3 древесины \n"; 
                cout<<"7. Время необходимое на производство древесины \n";
                cout<<"8. Обьем древесины,полученный в результате обработки(м^3)\n";
                cout<<"0. Выход\n";
                cout<<"\t\tВвод:" ;
        while(1)
        {
        cin>>i;
                if(cin.fail())
                {
                cin.clear();
                getline(cin,tmp);
                cout<<"Введите одну из цифр от 1 до 8";
                }
        else break;
        }

	switch(i)
         {
                case 1:
                cout<<"Введите нормер продикции, которая вас интересует >> ";
                while(1)
                {
                cin >> num;
                if(cin.fail())
                        {
                        cin.clear();
                        getline(cin,tmp);
                        cout<<"\n Номер задается числом!\n Введите число!\n\n";
                        }
                else break;
                }
        for (i=0;i<ob.size();i++)
        {
                if(ob[i].numerr()==num)
                {
                ob[i].show();
                kont=true;   
                }
        }
        if(!kont) cout <<"Продукция не найдена\n";
        kont = false;
        return true; 

	case 2:
        cout<<"Введите название древесины, которая вас интересует >> \n";
        getline(cin,nam);
        getline(cin,nam);
        cout<<"Вы ввели"<< nam<<endl;
        for(i=0;i<ob.size();i++)
        {
                if(ob[i].namee()==nam)
                {
                        ob[i].show();
                        kont=true;   
                }
        }
        if(!kont) cout <<"Ничего не найденно!\n";
        kont=false;
        return true;

        case 3:
                cout<<"Введите тип древесины, которую хотите найти >> \n";
                getline(cin, typ);
                getline(cin, typ);
                for(i=0;i<ob.size();i++)
                {
                        if(ob[i].typee()==typ)
                        {
                                ob[i].show();
                                kont=true;   
                        }
                }
        if(!kont) cout<<"Ничего не найден!\n";
        kont =false;
        return true;

	case 4:
                cout<<"Введите обьём древесины, имеющийся на складе(м^3)>> \n";
                while(1)
                {
                cin >> vo1;
                if(cin.fail())
                        {
                        cin.clear();
                        getline(cin,tmp);
                        cout<<"\n Обьём задается числом!\n Введите число!\n\n";
                        }
                else break;
                }
        for (i=0;i<ob.size();i++)
        {
                if(ob[i].vol11()==vo1)
                {
                ob[i].show();
                kont=true;   
                }
        }
        if(!kont) cout <<"Ничего не найдена!\n";
        kont = false;
        return true; 

	case 5:
                cout<<"Введите обьём древесины, который необходимо обработать(м^3) >> \n";
                while(1)
                {
                cin >> vo2;
                if(cin.fail())
                        {
                        cin.clear();
                        getline(cin,tmp);
                        cout<<"\n Обьём задается числом!\n Введите число!\n\n";
                        }
                else break;
                }
        for (i=0;i<ob.size();i++)
        {
                if(ob[i].vol22()==vo2)
                {
                ob[i].show();
                kont=true;   
                }
        }
        if(!kont) cout <<"Ничего не найдена!\n";
        kont = false;
        return true; 

	case 6:
                cout<<"Введите cебестоимость производства 1 м^3 древесины >> \n";
                while(1)
                {
                cin >> cos;
                if(cin.fail())
                        {
                        cin.clear();
                        getline(cin,tmp);
                        cout<<"\n Себестоемость задается числом!\n Введите число!\n\n";
                        }
                else break;
                }
        for (i=0;i<ob.size();i++)
        {
                if(ob[i].costt()==cos)
                {
                ob[i].show();
                kont=true;   
                }
        }
        if(!kont) cout <<"Ничего не найдена!\n";
        kont = false;
        return true; 

	case 7:
                cout<<"Введите время необходимое на производство древесины >> \n";
                while(1)
                {
                cin >> tim;
                if(cin.fail())
                        {
                        cin.clear();
                        getline(cin,tmp);
                        cout<<"\n Время задается числом!\n Введите число!\n\n";
                        }
                else break;
                }
        for (i=0;i<ob.size();i++)
        {
                if(ob[i].timee()==tim)
                {
                ob[i].show();
                kont=true;   
                }
        }
        if(!kont) cout <<"Ничего не найдена!\n";
        kont = false;
        return true; 

	 case 8:
                cout<<"Введите обьем древесины,получаемый в результате обработки(м^3) >> \n";
                while(1)
                {
                cin >> vo3;
                if(cin.fail())
                        {
                        cin.clear();
                        getline(cin,tmp);
                        cout<<"\n Обьем задается числом!\n Введите число!\n\n";
                        }
                else break;
                }
        for (i=0;i<ob.size();i++)
        {
                if(ob[i].vol33()==vo3)
                {
                ob[i].show();
                kont=true;   
                }
        }
        if(!kont) cout <<"Ничего не найдена!\n";
        kont = false;
        return true; 
}
}
