#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include <tuple>

using namespace std;

class Movie{
    private:
        vector<string> name, show_time;

    public:
        Movie(vector<string> Name, vector<string> showTime){
            name = Name;
            show_time = showTime;
        }

        void display(){
            cout << "Follwing shows are currently being shown" << endl;

            for (int i = 0; i < show_time.size(); i++){
                cout << "- " << name[i] << " at " << show_time[i] << endl;
            }
        }
};

class Ticket{
    private:
        static vector<vector<int>> status;
        static vector<vector<int>> row_number;
        static vector<vector<int>> seat_number;

    public:
        int ticketID, k = 1;

        Ticket(string ID){
            ticketID = extraction(ID);

            for (int i = 0; i < status.size(); i++) {
                for (int j = 0; j < status[i].size(); j++) {
                    status[i][j] = 0;
                }
            }

            for (int i = 0; i < row_number.size(); i++) {
                for (int j = 0; j < row_number[i].size(); j++) {
                    row_number[i][j] = i + 1;
                }
            }

            for (int i = 0; i < seat_number.size(); i++) {
                for (int j = 0; j < seat_number[i].size(); j++) {
                    seat_number[i][j] = k;
                    k++;
                }
            }
        }

        int extraction(string ID){
            string str = "";

            str += ID[4];
            str += ID[5];

            int n = stoi(str);

            return n;
        }

        bool check(int n){
            if (n > 10){
                n = n - 1;
                string str = to_string(n);
                int x, r, c;
                x = stoi(str);
                r = x / 10;
                c = x % 10;
                if (status[r][c] == false){
                    return false;
                }
                else{
                    return true;
                }
            }
            else{
                n = n - 1;
                if (status[0][n] == false){
                    return false;
                }
                else{
                    return true;
                }
            }
        }

        void ticketSold(int n){
            if (n > 10){
                n = n - 1;
                string str = to_string(n);
                int x, r, c;
                x = stoi(str);
                r = x / 10;
                c = x % 10;
                status[r][c] = true;
            }
        }

        void buyTicket(int n){
            int x = check(n);

            if (x == false){
                ticketSold(n);
                cout << "Ticket bought" << endl;
            }
            else{
                cout << "Seat already reserved" << endl;
            }
        }

        void displaySeats(){
            for (int i = 0; i < seat_number.size(); i++){
                cout << "Row-" << i + 1 << "\t";
                for (int k = 0; k < seat_number[i].size(); k++){
                    if (status[i][k] == true){
                        cout << "T ";
                    }
                    else{
                        cout << "F ";
                    }
                }
                cout << endl;
            }
        }

};

vector<vector<int>> Ticket::status(10, vector<int>(10));
vector<vector<int>> Ticket::row_number(10, vector<int>(10));
vector<vector<int>> Ticket::seat_number(10, vector<int>(10));

int main(){
    vector<string> movies = {"The Godfather", "The Dark Knight", "Pulp Fiction"};
    vector<string> showtimes = {"12:00pm", "3:00pm", "6:00pm"};

    Movie m(movies, showtimes);

    // m.display();

    Ticket t("22k-4734");

    t.buyTicket(32);

    t.displaySeats();

}