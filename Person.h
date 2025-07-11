#ifndef PERSON_H
#define PERSON_H

#include <unordered_set>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Person{
    private:
        vector<Person*> parents; // store parents in vector
        vector<Person*> children; // store children in vector
        vector<Person*> partners; // store partners in vector

        //bool printed;

        string fName;
        string mName;
        string lName;
        string maidenName;
        //string name;
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
            //printed == false;
        }

        // Default Constructor
        Person(string fName): fName(fName){
            //printed == false;
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

        /* // Remove, not necessary and just causing issues
        void addParent(Person* parent){
            parents.push_back(parent); // add person to end of vector
            parent->parents.push_back(this); 
        }
        */
        


        // SEARCH FUNCTION
        /*
        void find(Person* person, Person name, int count, int size){ 
            string x;
            cout << "Enter the name of person you are searching for: " << endl;
            cin >> x;

            // traverse tree until...
            //while(TNode* person.getName(name) != x){
                //person->next = person; // use ID int? to iterate?
            //}
            // return the object of the found person
            //return //found person;

            // if person found...
                // cout << "Person {Name} found."
                // return person obj with corresponding name
            // if person not found...
                // cout << "Person not found.";

            // handle error where person they are searching for doesn't exist. If the whole tree is traversed with no match, end.
        }
        */

        
        /*
        void removeChild(Person& person){
            //children<Person*>::iterator it = find(children.being(), children.end(), name);
            //if(it != children.end()) children.erase(it);

            //auto it = find(children.begin(), children.end(), name);
            //if(it != children.end()) children.erase(it);

            for(const auto child : children){ // for(int child = 0; child <= children.end(); ++child) ??? alternative
                if(person.getName() != child->getName()){
                    continue;
                }else{
                    children.erase(children.begin() + child);
                }
            }
            
            // searches from beginning to end of vector for child
            //child.erase(find(child.begin(), child.end(), person));
        }
        */
        


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
            person.printParents(person);
            person.printPartners(person);

            cout << endl;
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

            
            
            /*
            // Print children of Partners
            for(Person* partner : person->getPartners()){
                for(Person* pChild : partner->getChildren()){
                    
                    // if child has no partners AND no children, just print their name
                    if(pChild->getPartners().empty() == true && pChild->getChildren().empty() == true && !printed.count(pChild)){
                        for(int i = 0; i <= depth+2; i++){
                            cout << " "; // print a space based on depth for visuals
                        }

                        cout << pChild->getName();
                        cout << endl;
                        printed.insert(pChild);

                    }else if(pChild->getPartners().empty() == true && !printed.count(pChild)){
                        
                        for(int i = 0; i <= depth-1; i++){
                            cout << " "; // print a space based on depth for visuals
                        }

                        //cout << pChild->getName();
                        //cout << endl;
                        
                        printed.insert(pChild);

                        for(Person* child : pChild->getChildren()){
                            for(int i = 0; i <= depth-1; i++){
                                cout << " "; // print a space based on depth for visuals
                            }
                            //cout << child->getName() << endl;
                            //printed.insert(child);
                            // how to make it continue printing children of children... recursively
                            
                            printTree(pChild, depth);
                        }
                    }else if(pChild->getPartners().empty() == false && !printed.count(pChild)){
                        printed.insert(pChild);

                        for(Person* child : pChild->getChildren()){
                            for(int i = 0; i <= depth-1; i++){
                                cout << " "; // print a space based on depth for visuals
                            }
                            
                            printTree(pChild, depth);
                        }
                    }
                    
                }
            }
            */
        
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
