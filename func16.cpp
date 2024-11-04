// LAB-4 program of friend function for evaluation
#include <iostream>
#include <string>
using namespace std;

class recipe{
    string name;
    string ingredients;

    public:
    recipe(string dishname, string ing){
        name = dishname;
        ingredients = ing;
    }
    friend void displaying( recipe &r , string person);
};

void displaying(recipe &r,string person){
    if (person == "food inspector"){
        cout << "Access granted! Secret ingriedients for " << r.name << " are: " << r.ingredients << endl;
    }
    else{
        cout << "Access denied! Only a food inspector can view the ingridients" << endl;
    }
}
int main()
{
    recipe r1 ("chicken biryani","chicken , basmati rice , tomato , garam masala , tej pata, cloves");

    string person = "chef";
    cout << person << " is trying to access the recipe ingredients..." << endl;
    displaying( r1 , person);

    string person1 = "food inspector";
    cout << person1 << " is trying to access the recipe ingridents..." << endl;
    displaying( r1 , person1);
}