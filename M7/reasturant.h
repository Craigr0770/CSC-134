// reasturant class file
#include <iostream>
using namespace std;

class Restaurant {
    private:
        string name;
        double rating;
        string comment;
    
    public:
        Restaurant(string n, double r){
            name =n;
            rating = r;
            comment = "None";
        }

        string getName() const {
            return name;
        }
        double  getRating() const{
            return rating;
        }
         string getComment() const {
            return comment;
        }
        void setName(string n){
            name = n;
        }
        void setRating(double r){
            rating = r;
        }
        void setComment(string c){
            comment = c;
        }


        void printReview() {
            cout << "Name " << " ";
            cout << "(" << rating << "/5 stars)" << endl;
            cout << "Comments: " << comment << endl; 
        }

};