#include<iostream>
using namespace std;

/*Effectuer les opérations arithmétiques sur des données complexes à l'aide d'une classe
et d'un objet cette fois il faut redéfinir les opérateurs. Le programme doit demander la
partie réelle et imaginaire de deux nombres complexes et afficher les parties réelle et
imaginaire de l’opération demandée.*/
class complexe
{
   public:
   float img,rel;

   complexe() //class complexe 
   {
    cout<<"enter la partie reel :"<<endl;
    cin>>this->rel;                            
    cout<<"enter la partie imaginaire :"<<endl;
    cin>>this->img;                            
   }
   void operator + (complexe c)  //declaration un operateteur + pour effectuer l'addition
   {
    float x,y;
    x=this->img+c.img;
    y=this->rel+c.rel;
    cout<<"La somme est :"<<y<<"+"<<x<<"i"<<endl;     
   } 
   void operator - (complexe c)            //declare un operateteur - pour effectuer la soustraction
   {
    float x,y;
    x=this->img-c.img;
    y=this->rel-c.rel;
    cout<<"La difference est :"<<y<<"+"<<x<<"i"<<endl;  
   }
   void operator * (complexe c)          //declare un operateteur * pour effectuer le produit
   {
    float x,y;
    x=this->img*c.img;
    y=this->rel*c.rel;
    cout<<"Le produit est :"<<y<<"+"<<x<<"i"<<endl;    
   }
   void operator / (complexe c)     
   {
    float x,y;
    x=this->img/c.img;
    y=this->rel/c.rel;
    cout<<"Le rapport est :"<<y<<"+"<<x<<"i"<<endl;    
   }
};
int main()
{
    complexe A,B;     
    A+B;            
    A-B;            
    A*B;            
    A/B;             
    return 0;
}


