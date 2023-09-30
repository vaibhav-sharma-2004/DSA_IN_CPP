#include<iostream>
using namespace std;
class animal{
    private: //--> It will prive the member of class so that it can't be accessed outside class
             //--> ACCCESS MODIFIER
    int weight;


    public: //--> it will public the members of a class so that it can be access outside the class
            // --> ACCESS MODIFIER
    

    //properties
    int age;
    string name;

   //behaviour
    void eat(){
        cout<<"3 times a day"<<endl;

    }
    void sleep(){
        cout<<"8 hours"<<endl;

    }

    int getWeight(){ //--> it will  fetch the value of weight
        return weight ;
    }

    void setWeight(int w){  //--> it will set the value of weight
        weight=w;
    }

};

int main(){
   //STATIC MEMORY
    animal dog;

    dog.age=5; //--> it will access the age of dog

    cout<<"the age of  dog is:"<<dog.age<<endl;

    dog.name="sherry"; //--> it will access the name of dog
    cout<<"the name of dog is:"<<dog.name<<endl;

    dog.eat();  //--> it will call the function eat from the class

    dog.sleep(); //--> it will call the function sleep from the class

                      //    ___
   dog.setWeight(24); //       |
                      //       | --> both of these functions are used to access the private member of a class
                      //       |
    dog.getWeight();  //    ___|



    //DYNAMIC MEMORY

    animal*cat=new animal; //--> new keyword is used for dynamic memory allocation 

    (*cat).age=4;
    (*cat).name="meow";

    cout<<" age of cat is:"<<(*cat).age<<endl;
    cout<<"name of cat is:"<<(*cat).name<<endl;

    //OR

    cat->age=4;
    cat->name="meow";

    cout<<cat->age<<endl;
    cout<<cat->name<<endl;

}