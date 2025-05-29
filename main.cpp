#include "Person.h"

int main(){

    // Initialize root of family tree and name the tree.
    Person root("FAMILY TREE");

    Person peter("Peter", "Ben", "Parker", "Parker", 6, 10, 2001, 0, 0, 0);
    Person andrew("Andrew", "M.", "Garfield", "Garfield", 10, 10, 2000, 0, 0, 0);
    Person may("May", "", "Parker", "Loraine", 5, 15, 1946, 9, 27, 2033);
    Person rose("Rose", "Vera", "Garcia", "Garcia", 4, 2, 2015, 0, 0, 0);
    Person eliana("Eliana", "P", "Garcia", "Garcia", 4, 2, 2015, 0, 0, 0);
    Person elija("Elija", "P", "Parker", "Parker", 4, 2, 2015, 0, 0, 0);
    Person fabio("Fabio", "Emett", "Parker", "Parker", 4, 2, 2015, 0, 0, 0);
    Person ben("Ben", "James", "Parker", "Parker", 10, 10, 1934, 4, 5, 2016);
    Person wade("Wade", "W", "Wilson", "Wilson", 6, 10, 2001, 0, 0, 0);
    Person logan("Logan", "X", "Dude", "Dude", 6, 10, 2001, 0, 0, 0);

    //Person peter("Peter");
    //Person may("May");
    //Person rose("Rose");

    root.addChild(&may);
    //root.addChild(&ben);
    
    peter.addChild(&rose);
    peter.addPartner(&wade);
    peter.addPartner(&logan);

    andrew.addChild(&elija); 

    wade.addChild(&rose);
    wade.addChild(&eliana);
    wade.addPartner(&logan);

    wade.printPartners(wade); // Need to make it so if person1 adds person2 as a partner, the person2 auto sets person1 as their partner 

    may.addChild(&peter);
    may.addChild(&andrew);
    may.addPartner(&ben);

    ben.addChild(&peter);
    ben.addChild(&andrew);
    ben.addPartner(&may);

    eliana.addChild(&fabio); // if Rose has a child, it's fine since she is connected to the "main branch" aka Peter. 
                             // if Peter's partner's child have a child, it won't be printed.
    

    //peter.printPersonInfo(peter);
    //may.printPersonInfo(may);   
    //rose.printPersonInfo(rose);


    /*
    cout << "May -o- Ben" << endl;
    cout << "   Peter -o- Wade -o- Logan" << endl;
    cout << "       Rose" << endl;
    cout << "   Andrew" << endl;
    */



    root.printTree(&root); 

    //peter.update(&peter);
    //peter.printPersonInfo(peter); // Note: an updated person will keep the old name as perosn object

   return 0;
}