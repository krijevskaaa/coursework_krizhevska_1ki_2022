#include <iostream>
#include "Animal.h"
#include "Bird.h"
#include "Beast.h"
#include "Snake.h"

using namespace std;

int main()
{
    int weight,age,satiety,wing_length,lactation_period,selection, length;
    string kind,wildness,color;

    vector<string> food{};

    Beast *beast1 = new Beast("Wolf", 69, 15, 60,{"meat",4}, 5);
    Beast *beast2 = new Beast("Giraffe", 107, 4,53,{"leaves",3},6);
    Beast *beast3 = new Beast("Monkey",28,7,2,{"banana",7},3);
    Beast *beast4 = new Beast("Monkey",28,7,90,{"banana",4},8);
    Beast *beast5 = new Beast("Lion",89,36,49,{"meat",90},8 );
    Beast *beast6 = new Beast("Zebra",44,4,99,{"grass",490},87);
    Beast *beast7 = new Beast("Panda",125,8,37,{"bamboo",78},30);
vector<Beast> beasts = {beast1,beast7};
    Bird *bird1 = new Bird("Duck",6,7,70,{"seed",9},30,0);
    Bird *bird2 = new Bird("Parrot",2,4,3,{"pear",5},50,0);
    Bird *bird3 = new Bird("Hawk",8,30,80,{"meat",900},90,1);
vector<Bird> birds = {bird1,bird3};
    Snake *snake1 = new Snake("Viper",1,40,35,{"meat",3},60,"green");
    Snake *snake2 = new Snake("Python", 2,4,50,{"frogs",7},10,"yellow");
vector<Snake> snakes = {snake1,snake2};

    cout << "\n"
                "|            WELCOME TO THE ZOO!          |\n";
                "|             Its your ticket!            |\n";
    do {
        cout << "|*****************************************|\n"
                "| Choose animal:                          |\n"
                "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n"
                "| 1. Beast.                               |\n"
                "| 2. Bird.                                |\n"
                "| 3. Snake.                               |\n"
                "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n"
                "|               Good luck!                |\n"
                "|*****************************************|\n";
        cout << "\nEnter your selection:\n"; cin >> selection;
        switch (selection)
        {
            case 1:
                cout << "| Choose what you want to do:             |\n"
                        "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n"
                        "| 1. Add new beast.                       |\n"
                        "| 2. Beast move.                          |\n"
                        "| 3. To feed beast.                       |\n"
                        "\nEnter your selection:\n"; cin >> selection;
                switch (selection)
                {
                    case 1:
                        cout << "Enter kind of beast: "; cin >> kind;
                        cout << "Enter weight: "; cin >> weight;
                        cout << "Enter age: "; cin >> age;
                        cout << "Enter satiety: "; cin >> satiety;
                        cout << "Enter lactation period: "; cin >> lactation_period;
                    case 2:
                        cout << "Enter kind of beast: "; cin >> kind;
                        cout << "Enter weight: "; cin >> weight;
                        cout << "Enter age: "; cin >> age;
                        cout << "Enter satiety: "; cin >> satiety;
                        cout << "Enter lactation period: "; cin >> lactation_period;
                    case 3:
                        cout << "Your choose is feeding animal ";
                        cout << "Enter weight: "; cin >> weight;
                        cout << "Enter age: "; cin >> age;
                        cout << "Enter satiety: "; cin >> satiety;
                        cout << "Enter lactation period: "; cin >> lactation_period;
                }
            case 2:
                cout << "| Choose what you want to do:             |\n"
                        "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n"
                        "| 1. Add new bird.                       |\n"
                        "| 2. Bird move.                          |\n"
                        "| 3. To feed bird.                       |\n"
                        "\nEnter your selection:\n"; cin >> selection;
                switch (selection)
                {
                    case 1:
                        cout << "Enter kind of bird: "; cin >> kind;
                        cout << "Enter weight: "; cin >> weight;
                        cout << "Enter age: "; cin >> age;
                        cout << "Enter satiety: "; cin >> satiety;
                        cout << "Enter wing length: "; cin >> wing_length;
                        cout << "Enter wildness: "; cin >> wildness;
                }
            case 3:
                cout << "| Choose what you want to do:             |\n"
                        "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n"
                        "| 1. Add new snake.                       |\n"
                        "| 2. Snake move.                          |\n"
                        "| 3. To feed snake.                       |\n"
                        "\nEnter your selection:\n"; cin >> selection;
                switch (selection)
                {
                    case 1:
                        cout << "Enter kind of beast: "; cin >> kind;
                        cout << "Enter weight: "; cin >> weight;
                        cout << "Enter age: "; cin >> age;
                        cout << "Enter satiety: "; cin >> satiety;
                        cout << "Enter lactation period: "; cin >> lactation_period;
                }
        }
    } while


        return 0;
}
