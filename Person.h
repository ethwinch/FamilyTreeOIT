#ifndef PERSON_H
#define PERSON_H

#include <unordered_set>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class Person{
    private:
        vector<Person*> parents; // store parents in vector
        vector<Person*> children; // store children in vector
        vector<Person*> partners; // store partners in vector

        string fName;
        string mName;
        string lName;
        string maidenName;
        string fullName;

        int bMonth;
        int bDay;
        int bYear;

        int dMonth;
        int dDay;
        int dYear;

    public:
        // Constructor
        Person(string fName, string mName, string lName, string maidenName, int bMonth, int bDay, int bYear, int dMonth, int dDay, int dYear): fName(fName), mName(mName), lName(lName), maidenName(maidenName), bMonth(bMonth), bDay(bDay), bYear(bYear), dDay(dDay), dMonth(dMonth), dYear(dYear){
            
        }

        // Default Constructor
        Person(string fName): fName(fName){

        }

        ~Person(){

        }
        

        // SETTER FUNCTIONS
        void setName(){
            this->fullName = fullName;
        }

        void setFirstName(){
            this->fName = fName;
        }

        void setBirth(){
            this->bMonth = bMonth;
            this->bDay = bDay;
            this-> bYear = bYear;
        }

        void setDeath(){
            this->dMonth = dMonth;
            this->dDay = dDay;
            this->dYear = dYear;
        }



        // GETTER FUNCTIONS
        string getName(){
            if (mName != ""){ // if no middle name...
                fullName = fName+" "+mName+" "+lName; 
            }else{
                fullName = fName+" "+lName;
            }
            return fullName;
        }
        string getFirstName(){
            return fName;
        }

        // Used in print Tree
        const vector<Person*>& getChildren() const{
            return children;
        }
        const vector<Person*>& getPartners() const{
            return partners;
        }
            

        string getBirth(){
            string birth = to_string(bMonth) + " / " + to_string(bDay) + " / " + to_string(bYear);
            return birth;
        }

        string getDeath(){
            string death;
            if(dYear == 0){
                death = "ALIVE";
            }else{
                death = to_string(dMonth) + " / " + to_string(dDay) + " / " + to_string(dYear);
            }
            return death;
        }



        void addPartner(Person* partner){
            partners.push_back(partner); // add partner to end of the vector
            partner->partners.push_back(this);
        }

        void addChild(Person* child){
            children.push_back(child); // add person to end of vector
            child->parents.push_back(this); // set person as child's parent
        }
        


        // UPDATE FUNCTION
        // change info on preexisting person
        void update(Person* person){
            cout << "Enter First Name: " << endl;
            cin >> fName;
            
            cout << "Enter Middle Name: " << endl;
            cin >> mName;

            cout << "Enter Last Name: " << endl;
            cin >> lName;

            cout << "Enter Maiden Name: " << endl;
            cin >> maidenName;
        
            cout << "Enter Birth Date (MM / DD / YYYY): " << endl;
            cout << "Month: " << endl;
            cin >> bMonth;
            cout << "Day: " << endl;
            cin >> bDay;
            cout << "Year: " << endl;
            cin >> bYear;
        
            cout << "Enter Death Date (MM / DD / YYYY): " << endl;
            cout << "(If still alive, enter zeros.)" << endl;
            cout << "Month: " << endl;
            cin >> dMonth;
            cout << "Day: " << endl;
            cin >> dDay;
            cout << "Year: " << endl;
            cin >> dYear;
        }


        void printPartners(Person& person){
            cout << "Partners of " << person.getName() << ":" << endl;
            for(const auto& partner : partners){
                cout << partner->fName << endl;
            }
            cout << endl;
        }

        void printChildren(Person& person){
            // print children
            cout << "Children of " << person.getName() << ":" << endl;
            for(const auto& child : children){ // for child in children... iterate through children vector with child
                cout << child->fName << endl;
            }
            cout << endl;
        }

        void printParents(Person& person){
            cout << "Parents of " << person.getName() << ":" << endl;
            for(const auto& parent : parents){
                cout << parent->fName << endl;
            }
            std:cout << endl;
        }

        void printPersonInfo(Person& person){
            cout << person.getName() << endl;
            cout << "Birthdate: " << person.getBirth() << endl;
            cout << "Deathdate: " << person.getDeath() << endl;

            person.printChildren(person);
            //person.printParents(person);
            person.printPartners(person);

            cout << endl;
        }





        // GRAPHVIZ FORMATTING CODE FUNCTIONS
        void clusterStart(Person* person, int depth){
            cout << "subgraph " << "cluster" << person->getFirstName() << depth << "{" << endl;
            cout << "    {" << endl;
            cout << "        rank = same;" << endl;
            cout << "        node [shape = rectangle;]" << endl;
            cout << "        edge [style = invis]" << endl << endl;

            cout << "        \"" << person->getName() << "\"" << endl;
        }
        void clusterEnd(Person* person, int depth){
            cout << "    }" << endl;
            cout << "    color = deeppink1;" << endl;
            cout << "    bgcolor = pink;" << endl;
            cout << "}" << endl;
            cout << person->getFirstName() << depth << " -> " << "childOf" << person->getFirstName() << "0Node" << " [arrowhead = none]" << endl;
            cout << endl;
        }

        void createDiamondNode(Person* person, Person* partner, int depth){
            // Create Diamond Node
            cout << "{" << endl;
            cout << "rank=same; rankdir=LR;" << endl;
            cout << person->getFirstName() << depth << " [" << endl; // name partner node
            cout << "label=\"\",shape=diamond,regular=0,height=0.25, width=0.25,style=\"filled\", color=\"deeppink1\"" << endl;
            cout << "];" << endl;

            // Connect Diamond Node to Partners
            cout << "{" << endl;
            cout << "rank=same; rankdir=LR;" << endl;
            cout << "\"" << person->getName() << "\"" << " -> " << person->getFirstName() << depth << " -> " << "\"" << partner->getName() << "\"" << "[arrowhead = none, color=\"deeppink1\"];" << endl;
            cout << "}" << endl;
            cout << "}" << endl;
        }

        void createChildNode(Person* person, int i=0){
            cout << "{" << endl;
            for(Person* child : person->getChildren()){
                cout << "rank=same; rankdir=LR;" << endl;
                cout << "childOf" << person->getFirstName() << i << "Node:s [arrowhead = none, label=\"\", shape=circle, regular=0, height=0.05, width=0.05, style=\"filled\"];" << endl;
                i++;
            }
            cout << "}" << endl;
        }
        // connects circle nodes horizontally
        void connectChildNodes(Person* person, int i=0){
            for(Person* child : person->getChildren()){
                i++;
            }

            int i2 = 0;
            cout << "childOf" << person->getFirstName() << i2 << "Node";
            for(Person* child : person->getChildren()){
                while(i2 < i-1){
                    cout << " -> " << "childOf" << person->getFirstName() << i2+1 << "Node"; 
                    i2++;
                }
            }
            cout << " [arrowhead = none]" << endl;
        }
        // Create the lines to each child Node
        void connectChildNodeToChild(Person* person, unordered_set<Person*> printedChild, int i=0){
            for(Person* child : person->getChildren()){
                // !printed don't work
                if(!printedChild.count(child)){
                    cout << "childOf" << person->getFirstName() << i << "Node:s" << " -> " << "\"" << child->getName() << "\":n" << " [arrowhead = none]" << endl;
                    i++;
                    printedChild.insert(child);
                }
            }
        }

        void createToolTip(Person* person, int depth){
            cout << "\"" << person->getName() << "\"" << "[tooltip = \"";
            person->printPersonInfo(*person);
            cout << "\"]" << endl;
        }





        // Print Family tree showing relationships with -> and -o- to be integrated with Graphviz to create visual graph for tree
        void printGraph(Person* person, int depth, unordered_set<Person*>& printed){
            // Base Case - ends recursion once the end of the tree is reached or all people are printed
            if (person == nullptr || printed.count(person)) return;

            unordered_set<Person*> printedChild;
            

            //cout << person->getName();
            printed.insert(person);

            // create TOOL TIP
            createToolTip(person, depth);

            bool printedChildren = false;
            // Print Partners
            if(person->getPartners().empty() == false){ // check if they have partners...
                // cluster start
                //clusterStart(person, depth);

                for(Person* partner : person->getPartners()){
                    // Create partner's Tool Tip
                    createToolTip(partner, depth);
                }

                //for(Person* child : person->getChildren()){
                    //cout << "\"" << person->getName() << "\"" << " -> " << "\"" << child->getName() << "\" [arrowhead=none]";
                    //cout << endl;
                //}

                for(Person* partner : person->getPartners()){ // for each partner...
                    // cluster start
                    clusterStart(person, depth);

                    // Create Diamond Node
                    //createDiamondNode(person, partner, depth);

                    if(person->getChildren() == partner->getChildren() && person->getChildren().empty() == false){ // if partners share the same children...
                        // Create Diamond Node
                        createDiamondNode(person, partner, depth);

                        // ----------- PRINTING FOR EACH PARTNER -- DUPLICATES -- ------------ //
                        // end cluster
                        clusterEnd(person, depth);

                        // CREATE CHILD NODES
                        createChildNode(person);

                        // CONNECT NODES:   childOfMay0Node -> childOfMay1Node -> etc. -> etc.
                        connectChildNodes(person);
                        
                        // connect LINES to CHILD NODES
                        connectChildNodeToChild(person, printedChild);
                        // ----------- PRINTING FOR EACH PARTNER -- DUPLICATES -- ------------ //

                    }else if (person->getChildren() == partner->getChildren() && person->getChildren().empty() == true){
                        // Create Diamond Node
                        createDiamondNode(person, partner, depth);

                        // end cluster - WITHOUT drawing any lines to nodes from diamond 
                        cout << "    }" << endl;
                        cout << "    color = deeppink1;" << endl;
                        cout << "    bgcolor = pink;" << endl;
                        cout << "}" << endl;
                        cout << endl;
                    }else{ // if partners DO NOT have same children
                        int i=0;
                        for(Person* partner : person->getPartners()){
                            // Create Diamond Node for each partner
                            createDiamondNode(person, partner, depth+i);
                            i++;
                        }

                        // end cluster
                        clusterEnd(person, depth);

                        // CREATE--> sharedChildren vector for all partners
                        // compare children of partner1 to partner2
                        // if they share a child, add the child to a new sharedChildren vector
                        // compare partner2 to partner 3
                        // if they share a child, add the child to sharedChild vector
                        // 

                        for(Person* child : person->getChildren()){
                            cout << "\"" << person->getName() << "\"" << " -> " << "\"" << child->getName() << "\" [arrowhead=none]";
                            cout << endl;
                        }

                        // Children; child connected to parent node
                        // used if there is only one child, OR if a child is NOT SHARED between parents (unique children)
                        for(Person* child : partner->getChildren()){
                            cout << "\"" << partner->getName() << "\"" << " -> " << "\"" << child->getName() << "\"";
                            cout << endl;
                        }


                        /*
                        // CREATE CHILD NODES
                        createChildNode(person);


                        // CONNECT CHILD NODES
                        connectChildNodes(person);
    

                        // connect CHILD LINES to CHILD NODES
                        connectChildNodeToChild(person, printedChild);
                        

                        // Print Children of Partners (connected to correct parent); child connected to diamond
                        for(Person* pChild : partner->getChildren()){
                            if(find(person->children.begin(), person->children.end(), pChild) == person->children.end()){
                                cout << "\"" << partner->getName() << "\"" << " -> " << "\"" << pChild->getName() << "\"";
                                cout << endl;
                            }
                        }*/
                    }
                }
            }else{ // if a person does NOT have any partners
                // create TOOL TIP
                //createToolTip(person, depth);

                // Children; child connected to parent node
                // used if there is only one child, OR if a child is NOT SHARED between parents (unique children)
                for(Person* child : person->getChildren()){
                    cout << "\"" << person->getName() << "\"" << " -> " << "\"" << child->getName() << "\"";
                    cout << endl;
                }
            }
            cout << endl;





            // Stores a person's children and their partner's children
            unordered_set<Person*> allChildren;

            // Get person's children
            for (Person* child : person->getChildren()) {
                allChildren.insert(child);
            }

            // Get partner's children
            for (Person* partner : person->getPartners()) {
                for (Person* child : partner->getChildren()) {
                    allChildren.insert(child);
                }
            }

            // Print all the children stored in allChildren unordered set - EX. we combined peter, logan and wade's children into one set and then printed them as regular children.
            for (Person* child : allChildren) {
                if (!printed.count(child)) {
                    printGraph(child, depth+1, printed);
                }
            }

            
        
            // Navigating
            for(Person* child : person->getChildren()){
                printGraph(child, depth+1, printed);
            }
            
        }

        void printGraph(Person* person, int depth = 0){
            unordered_set<Person*> printed;
            printGraph(person, depth, printed);
        }




        // Pre-Order - start from root
        void printTree(Person* person, int depth, unordered_set<Person*>& printed){
            // Base Case - ends recursion once the end of the tree is reached or all people are printed
            if (person == nullptr || printed.count(person)) return;

            // Formatting
            for(int i = 0; i <= depth; i++){
                cout << " "; // print a space based on depth for visuals
            }
            cout << person->getName();
            printed.insert(person);

            // Print Partners
            for(Person* partner : person->getPartners()){
                cout << " -o- " << partner->getName();
                printed.insert(partner);
            }
            cout << endl;



            // Stores a person's children and their partner's children
            unordered_set<Person*> allChildren;

            // Get person's children
            for (Person* child : person->getChildren()) {
                allChildren.insert(child);
            }

            // Get partner's children
            for (Person* partner : person->getPartners()) {
                for (Person* child : partner->getChildren()) {
                    allChildren.insert(child);
                }
            }

            // Print all the children stored in allChildren unordered set - EX. we combined peter, logan and wade's children into one set and then printed them as regular children.
            for (Person* child : allChildren) {
                if (!printed.count(child)) {
                    printTree(child, depth+1, printed);
                }
            }

            
        
            // Navigating
            for(Person* child : person->getChildren()){
                printTree(child, depth+1, printed);
            }
            
        }

        void printTree(Person* person, int depth = 0) {
            unordered_set<Person*> printed;
            printTree(person, depth, printed);
        }

};

#endif
