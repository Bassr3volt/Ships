#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int rozmieszczone=1,wsp1,wsp2,trafy=0,strzaly=0,strz1,strz2,plansza[5][5]={};
    srand(time(NULL));
    while(rozmieszczone<6)
    {
        do
        {
            wsp1=rand()%5;
            wsp2=rand()%5;
        }while(plansza[wsp1][wsp2]==1);

        plansza[wsp1][wsp2]=1;
        rozmieszczone++;
    }

    while(trafy!=5 && strzaly!=10)
    {

        cout<<"Podaj pierwsza wspolrzedna (0-4): ";
        cin>>strz1;
        cout<<"Podaj druga wspolrzedna(0-4): ";
        cin>>strz2;


        if(plansza[strz1][strz2]==8)
        {
            cout<<"Juz oddawales strzal w to miejsce!"<<endl;
        }

        if(plansza[strz1][strz2]==1)
        {
            cout<<"Trafiony zatopiony"<<endl;
            plansza[strz1][strz2]=8;
            trafy++;
            strzaly++;
        }

        if(plansza[strz1][strz2]==0)
        {
            cout<<"Pudlo!"<<endl;
            plansza[strz1][strz2]=8;
            strzaly++;
        }
        cout<<endl;
    }

    if(trafy<5)
    {
        cout<<"Przegrales! Oto plansza"<<endl;
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                cout<<"\t"<<plansza[i][j];
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"Wygrales! Oto plansza: "<<endl<<endl;

        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                cout<<"\t"<<plansza[i][j];
            }
            cout<<endl;
        }
    }
    cout<<endl;
    cout<<"8 - miejsce oddanego strzalu"<<endl;
    cout<<"1 - pozycja statku"<<endl;
    cout<<"0 - puste pole"<<endl<<endl;
    cout<<"======================="<<endl;
    cout<<"Oddane strzaly: "<<strzaly<<endl;
    cout<<"Trafione strzaly: "<<trafy<<endl;
    cout<<"======================="<<endl;


}
