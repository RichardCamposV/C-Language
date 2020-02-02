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


void combat(float h_enemy, float a_enemy, float h_pikachu, const string& my_pokemon, string& name_pokemon){
    float attack_spark = 9.5, attack_ballvolt = 12.5;
    char user_select_damage;

    cout<<"\nTu oponente sera "<<name_pokemon <<endl;
    cout<<""<<my_pokemon <<" vs "<<name_pokemon <<endl;
    cout<<"¡Que empiece la pelea!\n\n";

    while(h_pikachu > 0 and h_enemy > 0){

        cout<<"\n(a)Ataque chispazo / (b)Ataque bola voltio\n";
        cin>>user_select_damage;

        if(user_select_damage == 'a'){
            h_enemy -= attack_spark;
            cout<<""<<my_pokemon <<" hizo un ataque de 9.5 de daño\n";
        }else if(user_select_damage == 'b'){
            h_enemy -= attack_ballvolt;
            cout<<""<<my_pokemon <<" hizo un ataque de 12.5 de daño\n";
        }

        cout<<"La vida de "<<name_pokemon <<" es de: "<<h_enemy<<endl;
        cout<<""<<name_pokemon <<" te hizo un ataque de "<<a_enemy <<" de daño"<<endl;

        h_pikachu -= a_enemy;
        cout<<"La vida de "<<my_pokemon <<": "<<h_pikachu<<endl;

    }

    if(h_pikachu <= 0){
        cout<<"\n¡"<<my_pokemon <<" a perdido!\n";
    }
    if(h_enemy <= 0){
        cout<<"\n¡"<<name_pokemon <<" a perdido!\n";
    }

    cout<<"El combate ha terminado\n";
}


float difficulty(){
    int user_difficulty;
    float difficulty = 0;

    cout<<"\n----- Elige la dificultad -----\n";
    cout<<"-------------------------------\n";
    cout<<"-----   1) Por defecto    -----\n";
    cout<<"-----     2) Dificil      -----\n";
    cout<<"-------------------------------\n\n";
    cout<<"Elige la dificultad deseada: ";
    cin>>user_difficulty;

    switch (user_difficulty){
        case 1:
            return(difficulty);
        case 2:
            difficulty += 5;
            return(difficulty);
        default:
            cout<<"¡Opcion invalida!\n";
    }
    return 0;
}


//Ricardo Campos Villasana - Programación 2
int main() {
    int final_decision;
    float health_pikachu = 100, final_difficulty;
    string option_user, my_pokemon = "Pikachu";

    while(option_user != "n"){
        final_decision = show_menu();

        if(final_decision == BULBASSAUR){
            final_difficulty = difficulty();
            string name_pokemon = "Bulbasaur";
            float attack_pokemon = 11.5, health_enemy = 100;

            attack_pokemon = attack_pokemon + final_difficulty;

            combat(health_enemy, attack_pokemon, health_pikachu, my_pokemon, name_pokemon);

        }else if(final_decision == CHARMANDER){
            final_difficulty = difficulty();
            string name_pokemon = "Charmander";
            float attack_pokemon = 8.5, health_enemy = 80;

            attack_pokemon = attack_pokemon + final_difficulty;

            combat(health_enemy, attack_pokemon, health_pikachu, my_pokemon, name_pokemon);

        }else if(final_decision == SQUIRTL){
            final_difficulty = difficulty();
            string name_pokemon = "Squirtl";
            float attack_pokemon = 10.5, health_enemy = 90;

            attack_pokemon = attack_pokemon + final_difficulty;

            combat(health_enemy, attack_pokemon, health_pikachu, my_pokemon, name_pokemon);

        }
        cout<<"Desea jugar?: Si (s) / No (n)\n";
        cin>>option_user;

    }

}
