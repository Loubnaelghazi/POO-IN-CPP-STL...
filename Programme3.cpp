#include<iostream>
#include<list>
#include<iterator>
using namespace std;
/*Écrire un programme qui fait entrer des entiers a l'utilisateur, qui les met au fur et à
mesure dans une liste (conteneur List de la STL), qui trie cette liste puis qui affiche la
liste triée.*/



void afficherlist(list<int> L) //fonction pour afficher les elements de la liste
{
    list<int> :: iterator it;   //declaration d un iterator
    for (it = L.begin(); it!=L.end(); it++)
       cout<<" "<<*it;
    cout<<"\n";
    
}

int main(int argc, char const *argv[])
{
    list<int> L;    //declare une liste
    int element;
    cout<<"Entrer les elements dans la list  :"<<endl;
    for (int i = 0; i < 5 ; i++)        
    {
        cin>>element;        
        L.push_front(element);  //inserer les elements au front
    }
    cout<<"Le contenu de la liste est : "<<endl;
    afficherlist(L);
    cout<<"Le contenu de la liste apres le  tri est : "<<endl;
    L.sort();   // trier les element en ordre croissant
    afficherlist(L);
    return 0;
}
