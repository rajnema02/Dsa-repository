#include<iostream>
using namespace std;

class Hero{
    private:
        int health;

    public:
        char level;
        static int TimeToComplete;
        Hero(){
            cout<<"constructor called"<<endl;
        }

        Hero(int health){
            this ->health = health;
        }

        Hero(int health, char level){
            this ->health = health;
            this ->level = level;
        }

        void print(){
            cout<<level<<endl;
        }
        void name(){
            
        }

        int getHealth(){
            return health;
        }
        void setHealth(int h){
            health = h;
        }
};

int Hero:: TimeToComplete = 5;

int main(){

    Hero hero1;
    hero1.print();

    cout<<"The value is: "<<Hero::TimeToComplete<<endl;

    // Hero h1;
    // // h1.health = 56;
    // h1.level = 'a';

    // h1.getHealth();
    // h1.setHealth(5);

    // cout<<h1.getHealth()<<endl;
    // cout<<h1.level<<endl;





    // static allocation
    // Hero h1;
    // h1.setHealth(45);
    // h1.level = 'a';

    // cout<<"The health is: "<<h1.getHealth()<<endl;
    // cout<<"The level is: "<<h1.level<<endl;

    // //dynamic allocation
    // Hero *b = new Hero;

    // (*b).setHealth(4);
    // (*b).level = 'd';

    // cout<<"The health is: "<<(*b).getHealth()<<endl;
    // cout<<"The level is: "<<(*b).level<<endl;

    // b->setHealth(54);

    // cout<<"The health is: "<<b->getHealth()<<endl;
    // cout<<"The level is: "<<b->level<<endl;



    //statically allocated
    // Hero h1(23);
    // cout<<"Address of h1: "<<&h1<<endl;
    // // h1.print();


    // //dynamically allocated
    // Hero *h = new Hero(11);
    // h->print();

    // Hero temp(22,'B');
    // temp.print();

}