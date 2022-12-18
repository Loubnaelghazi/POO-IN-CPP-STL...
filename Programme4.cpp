#include <iostream>
#include <list>
#include <string>
using namespace std;
/*Écrire un programme qui fait entrer des personnes « nom, prénom, âge », qui les met
au fur et à mesure dans une liste (conteneur List de la STL), qui trie cette liste selon
l’ordre alphabétique nom et prénom puis qui affiche la liste triée.*/


int main()
{
string s;
list<string> LS;
list<string>::iterator iter;
while (true) {
cout << "Enter votre Nom Prenom et votre Age : ";
getline(cin, s);
if (s.size() == 0)
break;
LS.push_back(s);
}
cout<< "la liste Apres le tri"<<endl;
LS.sort(); // trier
for (iter = LS.begin(); iter != LS.end(); iter++)
cout << *iter << endl;
return 0;
}