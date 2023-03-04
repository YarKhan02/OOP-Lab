#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

class DataScientist{ 
    private:
        int number_of_answers_given = 0, number_of_questions_asked = 0;

    protected:
        string highest_education;

    public:
        string first_name, last_name, country, id;
        int age;
        static int users;

        DataScientist(string firstName, string lastName, string highestEducation, string Country, int Age, string ID){
            first_name = firstName;
            last_name = lastName;
            highest_education = highestEducation;
            country = Country;
            age = Age;
            id = extract(ID);
            users++;
        }

        int extract(string ID){
            int last = ID.size() - 1;
            int second = ID[1];

            string str = "";

            str += second;
            str += ID[last];

            int n = stoi(str);

            return n;
        }

        void askQuestion(string numberOfQuestionsAsked){
            cout << numberOfQuestionsAsked << endl;

            number_of_questions_asked += 1;
        }

        void answerProblem(string numberOfAnswersGiven){
            cout << numberOfAnswersGiven << endl;
            number_of_answers_given += 1;
        }

        int count(){
            return users;
        }
};

int DataScientist::users = 0;

class Admin{
    public:
        string first_name, last_name, country, id;
        int age;

    public:
        Admin(string fisrtName, string lastName, string Country, int Age, string ID){
            first_name = fisrtName;
            last_name = lastName;
            country = Country;
            age = Age;
            id = ID;
        }

        void totalUsers(DataScientist* total){
            cout << "Total DataScientist Users are " << total -> users;
        }
};

int main(){
    Admin admin("Altaf", "Hussain", "UK", 55, "A-321");

    DataScientist ds1("wali yar", "khan", "masters", "pakistan", 20, "22k-4734");
    DataScientist ds2("ghandi", "ji", "12th pass", "india", 22, "19k-3865");

    ds1.askQuestion("What is Support Vector Regression?");
    ds1.answerProblem("Split the data set into training and testing");

    ds2.askQuestion("How can we slice array?");
    ds2.answerProblem("First you must know how to preprocessed data");

    admin.totalUsers(&ds1);
}