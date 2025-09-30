#include "Person.h"

int main(){

    // Initialize root of family tree and name the tree.
    Person root("FAMILY TREE");

    Person peter("Peter", "Ben", "Parker", "Parker", 6, 10, 2001, 0, 0, 0);
    Person andrew("Andrew", "", "Parker", "Parker", 10, 10, 2000, 0, 0, 0);
    Person may("May", "", "Parker", "Loraine", 5, 15, 1946, 9, 27, 2033);
    Person rose("Rose", "Vera", "Garcia", "Garcia", 4, 2, 2015, 0, 0, 0);
    Person eliana("Eliana", "P", "Garcia", "Garcia", 4, 2, 2015, 0, 0, 0);
    Person elija("Elija", "P", "Parker", "Parker", 4, 2, 2015, 0, 0, 0);
    Person fabio("Fabio", "Emett", "Parker", "Parker", 4, 2, 2015, 0, 0, 0);
    Person layla("Layla", "Marie", "Parker", "Parker", 4, 2, 2015, 0, 0, 0);
    Person alicia("Alicia", "Darkin", "Parker", "Gale", 4, 2, 2015, 0, 0, 0);
    Person ben("Ben", "James", "Parker", "Parker", 10, 10, 1934, 4, 5, 2016);
    Person wade("Wade", "W", "Wilson", "Wilson", 6, 10, 2001, 0, 0, 0);
    Person mary("Mary", "Jane", "Parker", "Watson", 6, 10, 2001, 0, 0, 0);

    Person anne("Anne", "", "Parker", "Parker", 6, 10, 2001, 0, 0, 0);

    //Person peter("Peter");
    //Person may("May");
    //Person rose("Rose");

    root.addChild(&may);
    //root.addChild(&ben);
    
    peter.addChild(&rose);
    peter.addChild(&anne);
    peter.addPartner(&wade);
    peter.addPartner(&mary);

    andrew.addChild(&elija); 

    wade.addChild(&rose);
    wade.addChild(&eliana);
    wade.addPartner(&mary);

    //wade.printPartners(wade); 

    may.addChild(&peter);
    may.addChild(&andrew);
    may.addPartner(&ben);

    ben.addChild(&peter);
    ben.addChild(&andrew);

    eliana.addChild(&fabio); 

    fabio.addChild(&layla); 
    layla.addPartner(&alicia);
    

    //peter.printPersonInfo(peter);
    //may.printPersonInfo(may);   
    //rose.printPersonInfo(rose);


    //root.printTree(&root); 

    // saves output to file
    ofstream fileOut("output.dot");
    cout.rdbuf(fileOut.rdbuf());

    // FOR OLD FORMAT
    // Print .dot code
    //root.printGraph(&root);
    //cout << "}";

    // FOR NEW FORMAT
    /**/
    cout << "digraph asde91 {" << endl << "ranksep=1; size = \"1,1\";" << endl;
    cout << "node [shape=box; fontname = \"Helvetica Neue 75\";]" << endl;
    cout << "splines = ortho;" << endl;
    root.printGraph(&root);
    cout << "}";
    

    //peter.update(&peter);
    //peter.printPersonInfo(peter); // Note: an updated person will keep the old name as perosn object

   return 0;
}