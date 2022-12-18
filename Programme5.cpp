#include <iostream>
#include<iterator>
#include<set>
#include<list>
#include<vector>
using namespace std;

bool rechercheV1_0(set<int> S , int a_rechercher)  //fonction avec un 2 parametres (set et int) por verifier 
//si un element existe dans une set ou non
{
    set<int>::iterator itr; //declaration de iterator
    for (itr=S.begin() ; itr != S.end() ; itr++) //boucle pour afficher les elements
    {
        if(*itr==a_rechercher) //condition
        return true;
    }
    return false;
    
}
bool rechercheV2_0(set<int>::iterator itr1 , set<int>::iterator itr2 , int a_rechercher)//fonction avec un 3
// parametres (iterator , iterator , int) pour verifier si un element existe dans une set ou non
{
    set<int>::iterator itr; //declaration de iterator
    for (itr=itr1 ; itr != itr2 ; itr++) //boucle pour afficher les elements
    {
        if(*itr==a_rechercher) //condition
        return true;
    }
        return false;

}
template<class A , class B , class C> bool rechercheV3_0(A itr1 , B itr2 , C a_rechercher)//fonction template 
{
    A itr;
    for (itr=itr1 ; itr != itr2 ; itr++)
    {
        if(*itr==a_rechercher)
        return true;
    }
        return false;

}

int main(int argc, char const *argv[])
{
    set<int> cent;   //declaration d'une set
    for (int i = 0; i < 100 ; i++) //boucle pour inserer les elements de 1 a 100 
    {
        cent.insert(i+1);
    }
    int valeur_a_rechercher; //declaration de valeur a rechercher
    cout<<"entrer la valeur a rechercher pour le set"<<endl;
    cin>>valeur_a_rechercher;
    cout<<rechercheV1_0(cent , valeur_a_rechercher)<<endl;  // appel a la fonction avec 2 parametres
    cout<<rechercheV2_0(cent.begin() , cent.end() , valeur_a_rechercher)<<endl;  // appel a la fonction avec 3 
    //parametres
    cout<<rechercheV3_0(cent.begin() , cent.end() , valeur_a_rechercher)<<endl; //appel a la fonction template

    list<int> L;    //declaration  d'une liste
    for (int i = 0; i < 7 ; i++)        
        L.push_front(i);  //inserer les elements au debut

    cout<<"entrer la valeur a rechercher, cette fois pour la Liste"<<endl;
    cin>>valeur_a_rechercher;
    cout<<rechercheV3_0(L.begin() , L.end() , valeur_a_rechercher)<<endl; //appel a la fonction template


    vector<string> V1; //declaration d'un vecteur
    V1.push_back("C++");
    V1.push_back("JAVA");
    V1.push_back("HTML");
    V1.push_back("CSS");
    V1.push_back("JAVASCRIPT");
    V1.push_back("PHP");
    string valeur_a_rechercher_string; // declaration de la valeur a rechercher string
    cout<<"entrer la valeur a rechercher, cette fois pour le Vecteur"<<endl;
    cin>>valeur_a_rechercher_string;
    cout<<rechercheV3_0(V1.begin() , V1.end() , valeur_a_rechercher_string)<<endl;//appel a la fonction template


    float T[10]={1,2,3,4,5,6,7,8,9,10}; //declaration de tableau
    float valeur_a_rechercher_float;   // declaration de la valeur a rechercher flaot
    cout<<"entrer la valeur a rechercher, cette fois pour le Tableau"<<endl;
    cin>>valeur_a_rechercher_float;
    cout<<rechercheV3_0(&T[0] , &T[10] , valeur_a_rechercher)<<endl; //appel a la fonction template

    
    return 0;
}