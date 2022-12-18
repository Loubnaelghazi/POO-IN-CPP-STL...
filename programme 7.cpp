#include <iostream>
using namespace std;

//on a notion d heritage :point couleur herite de point 


class point {
private:
double x;
double y;
protected:
string nom;
//les fcts 
public:

point(double x, double y,string nom){
this->x=x;
this->y=y;
this->nom=nom;
}
double getX(){

cout<<" entre la valeure de votre x  :";
cin>>x;

 return x;
}
double setX(double x){
    this->x=x;
    return x;
}
double getY(){

cout<<" entre la valeure de votre y :";
cin>>y;

 return y;
}
double setY(double y){
    this->y=y;
    return y;
}

string getNom(){

cout<<" entrer votre nom :";
cin>>nom;

 return nom;
}
string setNom(string nom){
    this->nom=nom;
    return nom;
}


 void afficher(){
    cout<<"votre x est :" <<x;
    cout<<"votre y est :"<<y;
    cout<<"votre nom est :"<<nom;

 }

};
class pointCouleur :public point{
    private:
unsigned int couleur; //ne peut pas etre negatif
public:
pointCouleur(double x,double y,string nom,unsigned int couleur):point(x,y,nom){
this->couleur=couleur;
}

unsigned int getCouleur(){
cout<<"la couleure est :";
return this->couleur;
}
void setColor(unsigned int couleur){
cout<<"veuillez entrer une couleure :";
cin>>couleur;
}
  void afficher(){
    point::afficher(); //methode d appel de la fct afficher de la classe hweritee qui prend le meme nom 
    cout<<"votre couleure choisie est :"<<couleur;
 } 
};



















int main (){
    return 0;
}