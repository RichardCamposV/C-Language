#include <iostream>

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
    string option_user;

    while(option_user != "n"){

        switch(show_menu()){
            case 1:
                cout<<"Bulbasaur\n";
                break;
            case 2:
                cout<<"Charmander\n";
                break;
            case 3:
                cout<<"Squirtl\n";
                break;
            default:
                cout<<"¡Opcion invalida!\n";
        }
        cout<<"Desea jugar?: Si (s) / No (n)\n";
        cin>>option_user;

    }

}
