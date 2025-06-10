#include "Person.h"

int main(){

    // Initialize root of family tree and name the tree.
    Person root("FAMILY TREE");

    Person anna("Anna", "", "Kettler", "Schram", 0, 0, 0, 0, 0, 0);
    Person unknown1("1____", "", "Kettler", "Kettler", 0, 0, 0, 0, 0, 0);

    Person adelle("Adelle", "", "Kettler", "Kettler", 0, 0, 0, 0, 0, 0);
    Person christian("Christian", "", "Kettler", "Kettler", 0, 0, 0, 0, 0, 0);
    Person john("John", "", "Kettler", "Kettler", 0, 0, 0, 0, 0, 0);
    Person karl("Karl", "", "Kettler", "Kettler", 0, 0, 0, 0, 0, 0); // Came to America from Germany in 1925
    Person heni("Heni", "", "Kettler", "Kettler", 0, 0, 0, 0, 0, 0);
    Person meta("Meta", "", "Kettler", "Kettler", 0, 0, 0, 0, 0, 0); // married to someone
    Person henry("Henry", "", "Kettler", "Kettler", 0, 0, 0, 0, 0, 0);
    Person william("William", "", "Kettler", "Kettler", 0, 0, 0, 0, 0, 0);

    Person hans("Hans", "", "Kettler", "Kettler", 0, 0, 0, 0, 0, 0);
    Person zina("Zina", "", "Kettler", "____", 0, 0, 0, 0, 0, 0);

    Person ralph("Ralph", "", "Kettler", "Kettler", 0, 0, 0, 0, 0, 0);
    Person anka("Anka", "", "Kettler", "Kettler", 0, 0, 0, 0, 0, 0);

    Person margaret("Margaret", "", "Kettler", "_____", 0, 0, 0, 0, 0, 0);

    Person carsten("Carsten", "", "Kettler", "Kettler", 0, 0, 0, 0, 0, 0); // married to someone
    Person katya("Katya", "", "Kettler", "Kettler", 0, 0, 0, 0, 0, 0);
    Person sabina("Sabina", "", "Kettler", "Kettler", 0, 0, 0, 0, 0, 0); // married to someone

    Person emily("Emily", "", "Kettler", "Kettler", 0, 0, 0, 0, 0, 0);
    Person unknown2("2____", "", "Kettler", "Kettler", 0, 0, 0, 0, 0, 0);

    Person martha("Martha", "Margaret", "Kettler", "Sawicki", 0, 0, 0, 0, 0, 0); // went by Caroline
    Person margaret2("Margaret", "", "Pras", "Kettler", 0, 0, 0, 0, 0, 0); // nick name: Marge
    Person anna1("Anna", "", "Rock", "Kettler", 0, 0, 0, 0, 0, 0);
    Person karl2("Karl", "__", "Kettler", "Kettler", 0, 0, 0, 0, 0, 0); // nick name: Whitey
    Person henry2("Henry", "Louis", "Kettler", "Kettler", 0, 0, 0, 0, 0, 0); // nick name: Hank

    Person wilbur("Wilbur", "Howard", "Rock", "Rock", 0, 0, 0, 0, 0, 0); // nick name: Bill

    Person margaretAnn("Margaret", "Ann", "Bauer", "Pras", 0, 0, 0, 0, 0, 0);
    Person david("David", "", "Pras", "Pras", 0, 0, 0, 0, 0, 0);

    Person anna2("Anna", "", "Pras", "Naso", 0, 0, 0, 0, 0, 0);

    Person unknown3("3_____", "", "Kettler", "Kettler", 0, 0, 0, 0, 0, 0);
    Person unknown4("4_____", "", "Kettler", "Kettler", 0, 0, 0, 0, 0, 0); // married
    Person unknown5("5_____", "", "Kettler", "Kettler", 0, 0, 0, 0, 0, 0); // married

    Person michael("Michael", "", "Kettler", "Kettler", 0, 0, 0, 0, 0, 0); // twin of Stacy
    Person stacy("Stacy", "", "Poto", "Kettler", 0, 0, 0, 0, 0, 0); // twin of Michael
    Person karl3("Karl", "___", "Kettler", "Kettler", 0, 0, 0, 0, 0, 0);
    Person linda("Linda", "", "Kettler", "_____", 0, 0, 0, 0, 0, 0);

    Person unknown6("6______", "", "Kettler", "Kettler", 0, 0, 0, 0, 0, 0);

    Person noah("Noah", "", "Pras", "Pras", 0, 0, 0, 0, 0, 0);
    Person justin("Justin", "", "Pras", "Pras", 0, 0, 0, 0, 0, 0);
    Person merik("Merik", "", "Pras", "Pras", 0, 0, 0, 0, 0, 0);

    Person unknown7("7_____", "", "Poto", "Poto", 0, 0, 0, 0, 0, 0);
    Person unknown8("8_____", "", "Poto", "Poto", 0, 0, 0, 0, 0, 0);
    Person unknown9("9_____", "", "Poto", "Poto", 0, 0, 0, 0, 0, 0);


    // Grandma BARBARA's Side
    Person frederick("Frederick", "", "Peters", "Peters", 0, 0, 0, 0, 0, 0);
    Person florence("Florence", "", "Peters", "O'Hagen", 0, 0, 0, 0, 0, 0);

    Person frederick2("Frederick", "", "Peters Jr.", "Peters", 0, 0, 0, 0, 0, 0);
    Person ann("Ann", "", "Burke", "Peters", 0, 0, 0, 0, 0, 0);
    Person dorris("Dorris", "", "Fennecken", "Peters", 0, 0, 0, 0, 0, 0); // Gma
    Person george("George", "Van Horn", "Lemming", "Lemming", 0, 0, 0, 0, 0, 0);

    Person george2("George", "", "Burke", "Burke", 0, 0, 0, 0, 0, 0);
    Person arlien("Arlien", "", "Krupinsky", "Burke", 0, 0, 0, 0, 0, 0); 

    Person pete("Pete", "", "Krupinski", "Krupinski", 0, 0, 0, 0, 0, 0);

    Person william3("William", "Henry", "Fennecken", "Fennecken", 0, 0, 0, 0, 0, 0); // Gpa

    Person ellen("Ellen", "Florence", "Reagin", "Fennecken", 0, 0, 0, 0, 0, 0);
    Person christine("Christine", "", "Aragona", "Fennecken", 0, 0, 0, 0, 0, 0);
    Person dianne("Dianne", "", "Wagoner", "Fennecken", 0, 0, 0, 0, 0, 0);
    Person william2("William", "Henry", "Fennecken 2", "Fennecken", 0, 0, 0, 0, 0, 0); // nick name: Bill

    Person barbara("Barbara", "", "Delaney", "Lemming", 0, 0, 0, 0, 0, 0); // Past Last Names: Lemming -> Hippi -> Kettler -> Delaney
    Person george3("George", "Van Horn", "Lemming", "Lemming", 0, 0, 0, 0, 0, 0); // Mom Unkown


    root.addChild(&anna);

    anna.addPartner(&unknown1);

    anna.addChild(&adelle);
    anna.addChild(&christian);
    anna.addChild(&john);
    anna.addChild(&karl);
    anna.addChild(&heni);
    anna.addChild(&meta);
    anna.addChild(&henry);
    anna.addChild(&william);

    unknown1.addChild(&adelle);
    unknown1.addChild(&christian);
    unknown1.addChild(&john);
    unknown1.addChild(&karl);
    unknown1.addChild(&heni);
    unknown1.addChild(&meta);
    unknown1.addChild(&henry);
    unknown1.addChild(&william);

    hans.addPartner(&zina);
    hans.addChild(&ralph);
    hans.addChild(&anka);

    ralph.addPartner(&margaret);
    ralph.addChild(&carsten);
    ralph.addChild(&katya);
    ralph.addChild(&sabina);
    margaret.addChild(&carsten);
    margaret.addChild(&katya);
    margaret.addChild(&sabina);

    carsten.addChild(&emily);
    carsten.addChild(&unknown2);

    karl.addPartner(&martha);
    karl.addChild(&margaret2);
    karl.addChild(&anna);
    karl.addChild(&karl2);
    karl.addChild(&henry2);

    martha.addChild(&margaret2);
    martha.addChild(&anna1);
    martha.addChild(&karl);
    martha.addChild(&henry2);

    anna1.addPartner(&wilbur);

    margaret2.addChild(&margaretAnn);
    margaret2.addChild(&david);

    david.addPartner(&anna2);
    david.addChild(&noah);
    david.addChild(&justin);
    david.addChild(&merik);

    anna2.addChild(&noah);
    anna2.addChild(&justin);
    anna2.addChild(&merik);

    karl2.addPartner(&linda);
    karl2.addChild(&michael);
    karl2.addChild(&karl3);

    karl3.addPartner(&unknown6);
    karl3.addChild(&unknown3);
    karl3.addChild(&unknown4);
    karl3.addChild(&unknown5);

    stacy.addPartner(&unknown9);
    stacy.addChild(&unknown7);
    stacy.addChild(&unknown8);

    // Grandma BARBARA's Side
    frederick.addPartner(&florence);
    frederick.addChild(&frederick2);
    frederick.addChild(&ann);
    frederick.addChild(&dorris);

    florence.addChild(&frederick2);
    florence.addChild(&ann);
    florence.addChild(&dorris);
    florence.addChild(&george2);

    ann.addPartner(&george2);
    ann.addChild(&arlien);

    george2.addChild(&arlien);

    arlien.addPartner(&pete);

    dorris.addPartner(&william3);
    dorris.addChild(&ellen);
    dorris.addChild(&christine);
    dorris.addChild(&dianne);
    dorris.addChild(&william2);
    dorris.addChild(&barbara);

    william3.addChild(&ellen);
    william3.addChild(&christine);
    william3.addChild(&dianne);
    william3.addChild(&william2);

    george2.addChild(&barbara);
    george2.addChild(&george3);

    barbara.addPartner(&henry2);

    
    //peter.printPersonInfo(peter);
    //may.printPersonInfo(may);   
    //rose.printPersonInfo(rose);


    //root.printTree(&root); 

    // saves output to file
    ofstream fileOut("output.dot");
    cout.rdbuf(fileOut.rdbuf());

    cout << "digraph asde91 {" << endl << "ranksep=1; size = \"1,1\";" << endl;
    cout << "node [shape=box; fontname = \"Helvetica Neue 75\";]" << endl;
    cout << "splines = ortho;" << endl;

    root.printGraph(&root);

    root.printGraph(&frederick);
    cout << "}";

    //peter.update(&peter);
    //peter.printPersonInfo(peter); // Note: an updated person will keep the old name as perosn object

   return 0;
}