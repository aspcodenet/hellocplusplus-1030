#include <stdio.h> // scanf, printf
#include <string.h> // strcpy, strcat


//Vad är jobbigt i C
// input/output - hej streams och stream insertion operator
//    printf %s %d, scanf (buffer overflow) etc etc      
// strings - japp hej std::string
// pekare - hej referenser
// allokeringar - hej vector
int main(){
    char namn[256];
    strcpy(namn, "Stefan");
    strcat(namn, " Holmberg");
    printf("Hej %s\n", namn);
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

