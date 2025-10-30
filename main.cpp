// #include <stdio.h> // scanf, printf
// #include <string.h> // strcpy, strcat
#include <iostream> // std::cout, std::cin
#include <string> // std::string
#include <vector>
// using namespace std;

//Vad är jobbigt i C
// input/output - hej streams och stream insertion operator
//    printf %s %d, scanf (buffer overflow) etc etc      
// strings - japp hej std::string
// pekare - hej referenser
// allokeringar - hej vector
// CLASS 
class Player{
public:
    std::string name;
    int age;
};

int main(){
    std::vector<Player> players; //Motsvarande list i python

    while(true){
        std::cout << "1. Skapa player" << std::endl;
        std::cout << "2. Visa alla" << std::endl; 
        std::cout << "3. Avsluta" << std::endl;
        int choice;
        std::cin >> choice;
        if(choice == 1){
            Player p;
            std::cout << "Ange namn: ";
            std::cin >> p.name;
            std::cout << "Ange ålder: ";
            std::cin >> p.age;
            players.push_back(p);

        }else if(choice == 2){
            for(Player pl : players){
                std::cout << "Namn: " << pl.name << ", Ålder: " << pl.age << std::endl;
            }
        }else if(choice == 3){
            break;
        } 
    }



    // //int i = "12";
    // auto j = 12 + 11;
    // int i = 12;
 
    // std::string s = "123";
    // auto s2 = "123";


    // int arr[]{ 21,9,56,99, 202 };
    // for(int index = 0; index < 5; index++){
    //     std::cout << "Element " << index << " är " << arr[index] << std::endl;
    // }
    
    // for(auto tal : arr){
    //     std::cout << "Tal: " << tal << std::endl;
    // }

    // // list = [12,13,111]
    // // for tal in list:
    // //     print(tal)



    // int year = 20;
    // int price;
    
    // if (year > 18) {
    //     price = 30;
    // }else{
    //     price = 20;
    // }



    // price = year > 18 ? 30 : 20;



    // std::string playerName = "Stefan";
    // if(playerName.length() < 10 ){
    //     std::cout << "Vilket kort namn du har" << std::endl;
    // }

    


    // int age = 12;
    // std::cout << "Ange ditt ålder: ";
    // std::cin >> age;
    // std::cout << "Ange ditt namn: ";
    // //std::cin >> playerName ;
    // std::getline(std::cin, playerName);
    // //scanf(" %s", playerName); // Stefan Holmberg



    // playerName = playerName + " Holmberg";
    // if(playerName == "Stefan Holmberg"){
    //     std::cout << "Hej " << playerName << std::endl;
    //     std::cout << "Du är " << age << " år gammal" << std::endl;
    // }
    // // char namn[256];
    // // strcpy(namn, "Stefan");
    // // strcat(namn, " Holmberg");
    // // if(!strcmp("Stefan", namn)){
       
    // // }   
    // // printf("Hej %s\n", namn);
    return 0;
}
// NYTT:
// loopar for each
// auto

//Övningar: 
// allmänt input/output   ExercisesVecka1.docx
// + funktioner ExercisesWeek3 (1).docx
//using namespace std;

// VARFÖR HAR VI LÄRT OSS DUMMA "C" då?
// PÅ IOT devices/embedded systems C vanligare än C++



// DEFINITION - funktion
// Metod = funktion som är del av en klass  

