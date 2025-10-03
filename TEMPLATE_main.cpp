/*
    This is the main template for the Family Tree Program on github @________________

    INSTRUCTIONS:
    - There are some lines of example code for you to follow if you are unsure of how to add a new person or their relationship.
*/



#include "Person.h"

int main(){

    // KEEP YOUR EDITS BELOW THIS LINE //

    // Initialize root of family tree and name the tree.
    Person root("FAMILY TREE");
    
    //////////////////////////////////////
    //          Add a New Person        //
    //////////////////////////////////////
    // Constructor is formatted like so:
    //Person name("FirstName", "MiddleName", "LastName", "MaidenName", birth month, birth day, birth year, death month, death day, death year, Person::Gender::gender, Person::Sex::sex, "description");
    // Birth and death dates MUST be integers!
    Person peter("Peter", "Ben", "Parker", "Parker", 6, 10, 2001, 0, 0, 0, Person::Gender::MAN, Person::Sex::MALE, "Is secretly Spider-Man.");
    Person wade("Wade", "W", "Wilson", "Wilson", 6, 10, 2001, 0, 0, 0, Person::Gender::OTHER, Person::Sex::MALE, "The merc with a mouth.");
    Person rose("Rose", "Vera", "Garcia", "Garcia", 4, 2, 2015, 0, 0, 0, Person::Gender::NB, Person::Sex::XX, "A victim of the worst dad jokes.");


    //////////////////////////////////////
    //         Draw Tree From...        //
    //////////////////////////////////////

    // Ex. Start drawing family tree from Peter
    root.addChild(&peter);
    


    //////////////////////////////////////
    //      Add Children to Person      //
    //////////////////////////////////////

    //So, Rose is Peter's child. 
    peter.addChild(&rose);
    


    //////////////////////////////////////
    //      Add Partners to Person      //
    //////////////////////////////////////
    /*
        Example:    peter.addPartner(&wade);
        So, Peter and Wade are now partners.

        /!\ DO NOT ADD PARTNERS TWICE- this means if you do: 
            peter.addPartner(&wade); 
        DO NOT also do:
            wade.addPartner(&peter);
        When you add person A as person B's partner, it also automatically adds person B as person A's partner. 
    */
    peter.addPartner(&wade);

    // KEEP YOUR EDITS ABOVE THIS LINE //





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