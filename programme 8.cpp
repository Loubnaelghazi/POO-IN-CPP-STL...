#include <iostream>
#include <list>
#include <iterator>
using namespace std ;
class chat ;
class Repas ;
class Elements;
class Animal;
class chat {
private:
string type ;
private:
list <Repas> listRepas;
public :
list<Repas> getlistRepas(){
return this->listRepas;
}
void setype(string type ){
this->type=type;
}
string gettype(){
return this->type
}
void setRepas(string R){
this->R=R;
}
Repas getRepas(){
return this->R;
}
~Elements(){
}
};