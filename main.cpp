#include "Person.h"

int main(){

    // Initialize root of family tree and name the tree.
    Person root("FAMILY TREE");
    
    //Person name("FirstName", "MiddleName", "LastName", "MaidenName", birth month, birth day, birth year, death month, death day, death year, gender, sex, description);
    Person peter("Peter", "Ben", "Parker", "Parker", 6, 10, 2001, 0, 0, 0, Person::Gender::MAN, Person::Sex::MALE, "Is secretly Spider-Man.");
    Person andrew("Andrew", "", "Parker", "Parker", 10, 10, 2000, 0, 0, 0, Person::Gender::MAN, Person::Sex::MALE, "");
    Person may("May", "", "Parker", "Loraine", 5, 15, 1946, 9, 27, 2033, Person::Gender::WOMAN, Person::Sex::FEMALE, "");
    Person rose("Rose", "Vera", "Garcia", "Garcia", 4, 2, 2015, 0, 0, 0, Person::Gender::NB, Person::Sex::XX, "");
    Person eliana("Eliana", "P", "Garcia", "Garcia", 4, 2, 2015, 0, 0, 0, Person::Gender::AGENDER, Person::Sex::XX, "");
    Person elija("Elija", "P", "Parker", "Parker", 4, 2, 2015, 0, 0, 0, Person::Gender::X, Person::Sex::MALE, "");
    Person fabio("Fabio", "Emett", "Parker", "Parker", 4, 2, 2015, 0, 0, 0, Person::Gender::AGENDER, Person::Sex::XX, "");
    Person layla("Layla", "Marie", "Parker", "Parker", 4, 2, 2015, 0, 0, 0, Person::Gender::WOMAN, Person::Sex::FEMALE, "");
    Person alicia("Alicia", "Darkin", "Parker", "Gale", 4, 2, 2015, 0, 0, 0, Person::Gender::WOMAN, Person::Sex::FEMALE, "");
    Person ben("Ben", "James", "Parker", "Parker", 10, 10, 1934, 4, 5, 2016, Person::Gender::MAN, Person::Sex::MALE, "");
    Person wade("Wade", "W", "Wilson", "Wilson", 6, 10, 2001, 0, 0, 0, Person::Gender::OTHER, Person::Sex::MALE, "The merc with a mouth.");
    Person mary("Mary", "Jane", "Parker", "Watson", 6, 10, 2001, 0, 0, 0, Person::Gender::WOMAN, Person::Sex::FEMALE, "The girl next door.");

    Person anne("Anne", "", "Parker", "Parker", 6, 10, 2001, 0, 0, 0, Person::Gender::WOMAN, Person::Sex::FEMALE, "");

    // Start family tree from May
    root.addChild(&may);
    
    // Add children of persons
    peter.addChild(&rose);
    peter.addChild(&anne);
    peter.addPartner(&wade);
    peter.addPartner(&mary);

    andrew.addChild(&elija); 

    wade.addChild(&rose);
    wade.addChild(&eliana);
    wade.addPartner(&mary);

    may.addChild(&peter);
    may.addChild(&andrew);
    may.addPartner(&ben);

    ben.addChild(&peter);
    ben.addChild(&andrew);

    eliana.addChild(&fabio); 

    fabio.addChild(&layla); 
    layla.addPartner(&alicia);
    

    // Print tree in terminal
    //root.printTree(&root); 

    // saves output to file
    ofstream fileOut("output.dot");
    cout.rdbuf(fileOut.rdbuf());


    // GRAPHVIZ FORMAT
    cout << "digraph asde91 {" << endl << "ranksep=1; size = \"1,1\";" << endl;
    cout << "node [shape=box; fontname = \"Helvetica Neue 75\";]" << endl;
    cout << "splines = ortho;" << endl;
    root.printGraph(&root);
    cout << "}";

   return 0;
}