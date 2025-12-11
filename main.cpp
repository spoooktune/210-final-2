#include <iostream>
#include <list>
#include <random>

using namespace std;

const string NAMES_LIST[20] = {"Liam", "Emma", "Noah", "Olivia", "Ethan", "Ava", "Mason", "Sophia", "Logan", "Isabella", "Lucas", "Mia", "Alexander", "Charlotte", "Henry", "Amelia", "Jack", "Evelyn", "Samuel", "Harper"};
const string COFFEE_LIST[20] = {"Iced vanilla latte with oat milk", "Double espresso, extra hot", "Caramel macchiato with almond milk", "Mocha frappé with whipped cream", "Flat white, whole milk", "Cold brew with sweet cream", "Americano with a splash of half-and-half", "Iced chai latte, light ice", "Cappuccino with an extra shot", "Hazelnut latte with coconut milk", "Nitro cold brew, no ice", "Pumpkin spice latte, whipped cream", "Iced matcha latte with soy milk", "Honey cinnamon latte, whole milk", "Espresso macchiato, two shots", "White chocolate mocha, no whip", "Iced americano with vanilla cold foam", "Cortado, whole milk", "Brown sugar shaken espresso, oat milk", "Drip coffee, dark roast, two sugars"};

struct Node{
    string name;
    string order;
    Node(string n, string o){
        name = n; 
        order = o;
    }
};

int main(){
    srand(time(0));
    list<Node> coffee_booth;
    int random;
    for (int i = 0; i < 3; i++){
        random = rand() % 20;
        string n = NAMES_LIST[random];
        random = rand() % 20;
        string o = COFFEE_LIST[random];
        Node temp(n, o);
        coffee_booth.push_back(temp);
    }

    for (Node x : coffee_booth){
        cout << x.name << ": " << x.order << endl;
    }
    return 0;
}