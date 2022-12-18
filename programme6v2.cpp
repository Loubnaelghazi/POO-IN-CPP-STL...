#include <iostream>
using namespace std;
class Test
{
    public:
    static int tableau[] ; //declaration d'un tableau static
    public:
    static int division(int indice, int diviseur) //fonction qui devise un element du tableau par un elemet donner 
    //par l'utilisateur
    {
        return (tableau[indice])/(diviseur);     
    }
};
int Test::tableau[] =  {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ; //element de tableau
int main()   
{    
    int x, y;
    cout << "Entrez l'indice de l'entier a diviser: " << endl;
    cin >> x ;
    cout << "Entrez le diviseur: " << endl;
    try{  
       cin >> y ;
       if(y==0){ //condition de l'exception 
       throw"impossible de deviser par 0";}
    cout << "Le resultat de la division est: "<< endl; 
    cout <<Test::division(x,y) << endl;
    }
    catch(const char* exception){ 
        cerr << "l'exception :"<< exception << endl;
    }
    return 0;
} 
