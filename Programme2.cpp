#include<iostream>
#include<string.h>
using namespace std;




/*Soit une chaîne de caractères contenant une date (JJ/MM/AAAA) et une heure (HH:NN)
sous la forme JJMMAAAAHHNN. Par exemple 010920091123 représente la date du
1er septembre 2009 à 11h23.*/




void affichage(string date) //fonction qui affiche la date sou forme de DD/MM/YYYY et l'heure : HH:NN 
{
    if(date.length()!=12)            
    cout<<"date invalide !!"<<endl;
    else               
    {
        cout<<"Date : "<<date.substr(0,2)<<"/"<<date.substr(2,2)<<"/"<<date.substr(4,4)<<endl;
        cout<<"Heure : "<<date.substr(8,2)<<":"<<date.substr(10,2)<<endl;
    }
}

int main()
{
    string date=("181220221139"); // date
    affichage(date); 
    return 0;
}
