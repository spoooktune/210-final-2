#include <iostream>
#include <list>
#include <random>
#include <deque>
#include <vector>

using namespace std;

// NOTE FOR LATER: ADD MORE NAMES TO NAMES_LIST
 
// Milestone 1
const string NAMES_LIST[20] = {"Liam", "Emma", "Noah", "Olivia", "Ethan", "Ava", "Mason", "Sophia", "Logan", "Isabella", "Lucas", "Mia", "Alexander", "Charlotte", "Henry", "Amelia", "Jack", "Evelyn", "Samuel", "Harper"};
const string COFFEE_LIST[20] = {"Iced vanilla latte with oat milk", "Double espresso, extra hot", "Caramel macchiato with almond milk", "Mocha frappé with whipped cream", "Flat white, whole milk", "Cold brew with sweet cream", "Americano with a splash of half-and-half", "Iced chai latte, light ice", "Cappuccino with an extra shot", "Hazelnut latte with coconut milk", "Nitro cold brew, no ice", "Pumpkin spice latte, whipped cream", "Iced matcha latte with soy milk", "Honey cinnamon latte, whole milk", "Espresso macchiato, two shots", "White chocolate mocha, no whip", "Iced americano with vanilla cold foam", "Cortado, whole milk", "Brown sugar shaken espresso, oat milk", "Drip coffee, dark roast, two sugars"};
// Milestone 3
const string MUFFIN_LIST[20] = {"Blueberry Crumble", "Chocolate Chip", "Banana Nut", "Lemon Poppyseed", "Double Chocolate", "Apple Cinnamon", "Raspberry White Chocolate", "Pumpkin Spice", "Cranberry Orange", "Peanut Butter Swirl", "Carrot Cake", "Strawberry Streusel", "Maple Pecan", "Mocha Espresso", "Coconut Lime", "Blackberry Almond", "Vanilla Bean", "Cherry chocolate chunk", "Gingerbread", "Salted Caramel"};
// Milestone 4
const string BRACELET_LIST[20] = {"Cerulean", "Marigold", "Forest Green", "Coral Pink", "Indigo", "Mint", "Burgundy", "Lavender", "Charcoal", "Teal", "Goldenrod", "Peach", "Navy Blue", "Turquoise", "Crimson", "Sage", "Magenta", "Sand", "Sky Blue", "Plum"};
// Milestone 4 
const string _LIST[20] = {};

// Milestone 1
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
    // Milestone 1
    list<Node> coffee_booth;
    deque<Node> muffin_booth;
    vector<Node> bracelet_booth;
    int random;
    string n;
    string o;
    for (int i = 0; i < 3; i++){
        random = rand() % 20;
        n = NAMES_LIST[random];
        random = rand() % 20;
        o = COFFEE_LIST[random];
        Node tC(n, o);
        coffee_booth.push_back(tC);
        cout << "> [Coffee] " << n << " joined the line [" << o << "]" << endl;

        // Milestone 3
        random = rand() % 20;
        n = NAMES_LIST[random];
        random = rand() % 20;
        o = MUFFIN_LIST[random];
        Node tM(n, o);
        muffin_booth.push_back(tM);
        cout << "> [Muffins] " << n << " joined the line [" << o << "]" << endl;

        // Milestone 4
        random = rand() % 20;
        n = NAMES_LIST[random];
        random = rand() % 20;
        o = BRACELET_LIST[random];
        Node tB(n, o);
        bracelet_booth.push_back(tB);
        cout << "> [Bracelets] " << n << " joined the line [" << o << "]" << endl;

    }
    cout << endl;

    // Milestone 2
    for (int i = 1; i <= 10; i++){
        cout << "Round " << i << endl;
        random = rand() % 100 + 1;
        if (random <= 50){
            random = rand() % 20;
            n = NAMES_LIST[random];
            random = rand() % 20;
            o = COFFEE_LIST[random];
            Node tC(n, o);
            coffee_booth.push_back(tC);
            cout << "> [Coffee] " << n << " joined the line [" << o << "]" << endl;
        }
        if (!coffee_booth.empty()){
            n = coffee_booth.front().name;
            o = coffee_booth.front().order;
            coffee_booth.pop_front();
            cout << "> [Coffee] " << n << " has been served" << endl;
        }
        else{
            cout << "> [Coffee] No new events" << endl;
        }

        cout << "> [Coffee] Current Line" << endl;
        if (coffee_booth.empty()){
            cout << " > Line is empty" << endl;
        }
        else{
            for (Node p : coffee_booth){
                cout << " > " << p.name << " [" << p.order << "]" << endl;
            }
        }
        cout << endl;

        // Milestone 3
        random = rand() % 100 + 1;
        if (random <= 50){
            random = rand() % 20;
            n = NAMES_LIST[random];
            random = rand() % 20;
            o = MUFFIN_LIST[random];
            Node tM(n, o);
            muffin_booth.push_back(tM);
            cout << "> [Muffins] " << n << " joined the line [" << o << "]" << endl;
        }
        if (!muffin_booth.empty()){
            n = muffin_booth.front().name;
            o = muffin_booth.front().order;
            muffin_booth.pop_front();
            cout << "> [Muffins] " << n << " has been served" << endl;
        }
        else{
            cout << "> [Muffins] No new events" << endl;
        }
        cout << "> [Muffins] Current Line" << endl;
        if (muffin_booth.empty()){
            cout << " > Line is empty" << endl;
        }
        else{
            for (Node p : muffin_booth){
                cout << " > " << p.name << " [" << p.order << "]" << endl;
            }
        }
        cout << endl;

        // Milestone 4
        random = rand() % 100 + 1;
        if (random <= 50){
            random = rand() % 20;
            n = NAMES_LIST[random];
            random = rand() % 20;
            o = BRACELET_LIST[random];
            Node tB(n, o);
            bracelet_booth.push_back(tB);
            cout << "> [Bracelets] " << n << " joined the line [" << o << "]" << endl;
        }
        if (!bracelet_booth.empty()){
            n = bracelet_booth.front().name;
            o = bracelet_booth.front().order;
            bracelet_booth.erase(bracelet_booth.begin());
            cout << "> [Bracelets] " << n << " got a bracelet" << endl;
        }
        else{
            cout << "> [Bracelets] No new events" << endl;
        }
        cout << "> [Bracelets] Current Line" << endl;
        if (bracelet_booth.empty()){
            cout << " > Line is empty" << endl;
        }
        else{
            for (Node p : bracelet_booth){
                cout << " > " << p.name << " [" << p.order << "]" << endl;
            }
        }
        cout << endl;
    }
    return 0;
}