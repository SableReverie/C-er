#include <iostream>

using namespace std ;
int main() {
    
    // Para ni sha sa Hello World!
    
    cout << "Hello World!" << endl << endl ;
    
    /*
    Diria tanan user Information
    ni 
    Sir Kliff 
    and Lyka
    */
    cout << "Name: Kliff Alexis" << endl ;
    cout << "Age: 18\n" ;
    cout << "Occupation: Instructor I" << endl ;
    
    // Data Types and Variables
    /*
    string , char, int, float, double, bool
    
    */
    
    // dataTypes variableName = value ;
    
    string profileNameOne = "Kliff" ;
    char middleInitialOne = 'C' ;
    int ageOne = 18 ;
    
    cout << "Name: " << profileNameOne << " " << middleInitialOne << endl ;
    cout << "Age: " << ageOne << endl ;
    
    cout << endl << endl ;
    
    string profileNameTwo = "Lyka" ;
    int money = 50 ;
    float oilPrice = 19.95 ;
    float change = money - oilPrice ;
    bool mothersQuestion = true ;
    
    cout << "Money: " << money << endl ; 
    cout << "Oil Price: " << oilPrice << endl ; 
    cout << "Change: " << change << endl ;
    cout << "tag 20 ra sha? " << mothersQuestion << endl ;
    
    cout << endl ;
    /*
    
    // User Input 
    string prepre ;
    int prepreAge ;
    
    cout << "What's your name prepre: " ;
    cin >> prepre ;
    cout << "Prepre's Name: " << prepre  << endl ;
    
    cout << "Age: " ;
    cin >> prepreAge ;
    cout << "Prepre's Age: " << prepreAge << endl ;
    
    */
    
    int ageLyka = 20 ;
    int ageKliff = 18 ;
    cout << (ageLyka < 18) << endl ;
    cout << (20 > ageKliff) << endl ;
    cout << (ageLyka == ageKliff) << endl ;
    cout << (20 == 20) << endl ;
    cout << (20 != 18) << endl ;
    cout << (20 <= 18) << endl ;
    cout << (20 <= 20) << endl ;
    cout << (20 >= 18) << endl ;
    
    // &&, ||, !
    
    cout << endl ;
    cout <<"&& Operator: \n" ;
    int ageLykaTwo = 20 ;
    int ageKliffTwo = 18 ;
    cout << ((ageLykaTwo < 18) && (ageLykaTwo == 18)) << endl ;
    cout << ((20 > ageKliffTwo) && (ageLykaTwo >= 20)) << endl ;
    cout << ((ageLykaTwo == ageKliffTwo) && (ageLykaTwo >= ageKliffTwo))  << endl ;
    
    
    cout << endl ;

    cout << "|| Operator: " << endl ;
    cout << ((ageLykaTwo < 18) || (ageLykaTwo == 18)) << endl ;
    cout << ((20 > ageKliffTwo) || (ageLykaTwo >= 20)) << endl ;
    cout << ((ageLykaTwo == ageKliffTwo) || (ageLykaTwo >= ageKliffTwo))  << endl ;

    /* 
        A &&  B = C
        0   0 = 0
        0   1 = 0
        1   0 = 0
        1   1 = 1
    */
    
    /* 
        A ||B = C
        0   0 = 0
        0   1 = 1
        1   0 = 1
        1   1 = 1
    */
    
    // Not!
    // A = 0
    // !A = 1
    
    bool negate = false ;
    cout << "Negate: " << !negate << endl ;
    
    cout << endl << endl ;
    
    float gradingSystem = 59.63 ;
    
    if (gradingSystem >= 98 && gradingSystem <= 100) {
        cout << "With Highest" << endl ;
    } else if (gradingSystem >= 95 && gradingSystem <= 97){
        cout << "With High" << endl ;
    } else if (gradingSystem >= 90 && gradingSystem <= 94){
        cout << "With" << endl ;
    } else if (gradingSystem <= 89 && gradingSystem >= 75){
        cout << "PASAR LANG" << endl ;
    } else {
        cout << "BOBO MO PAR!" << endl ;
    }
    //if and else
    /*
    if (variableName == condition) {
        statement...
    } else {
        statement...
    }
    */
    
    char room = 'b' ;
    
    switch(room) {
        case 'a':
            cout << "Wrong room 20" << endl ;
            break ;
        case 'b':
            cout << "Wrong room 21" << endl ;
            break ;
        case 'c':
            cout << "Enter Successfully! 23" << endl ;
            break ;
        case 'd':
            cout << "Enter Successfully! 23" << endl ;
            break ;
        default:
            cout << "Invalid Input" << endl ;
            break ;
    }
