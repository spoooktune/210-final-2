#include <iostream>
#include <list>

using namespace std;

const string NAMES_LIST[] = {};


struct Node{
    string name;
    string order;
    Node(string n, string o){
        name = n; 
        order = o;
    }
};

int main(){
    list<Node> coffee_booth;
    return 0;
}