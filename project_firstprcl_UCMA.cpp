#include <iostream>

#define BULBASSAUR 1
#define CHARMANDER 2
#define SQUIRTL 3

using namespace std;

int show_menu(){
    int pokemon_name;
    cout<<"---------- COMBATE POKEMON ----------\n";
    cout<<"-------------------------------------\n";
    cout<<"----------  1) Bulbasaur   ----------\n";
    cout<<"----------  2) Charmander  ----------\n";
    cout<<"----------   3) Squirtl    ----------\n";
    cout<<"-------------------------------------\n\n";
    cout<<"Eliga el pokemon con quien desea pelear: ";
    cin>> pokemon_name;
    return(pokemon_name);
}


//Ricardo Campos Villasana - Programación 2
int main() {
    int health_pikachu = 100, final_decision;
    string option_user;

    while(option_user != "n"){
        final_decision = show_menu();

        if(final_decision == BULBASSAUR){
            int health_enemy = 100;
            string name_pokemon = "Bulbasaur";
            float attack_pokemon = 10.5;

            cout<<health_enemy<<endl;
            cout<<attack_pokemon<<endl;
        }else if(final_decision == CHARMANDER){
            int health_enemy = 80;
            string name_pokemon = "Charmander";
            float attack_pokemon = 7.5;

            cout<<health_enemy<<endl;
            cout<<attack_pokemon<<endl;
        }else if(final_decision == SQUIRTL){
            int health_enemy = 90;
            string name_pokemon = "Squirtl";
            float attack_pokemon = 8.5;

            cout<<health_enemy<<endl;
            cout<<attack_pokemon<<endl;
        }
        cout<<"Desea jugar?: Si (s) / No (n)\n";
        cin>>option_user;

    }

}
