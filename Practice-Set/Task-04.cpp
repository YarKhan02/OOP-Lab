#include <iostream>
#include <vector>

using namespace std;

class HotelMercato {
	private:
		float per_day;
		string name;
		int number_of_days;
		float rent;

	public:
		HotelMercato(string n, int nod) {
			per_day = 1000.85;
			name = n;
			numberOfDays(nod);
		}

		void numberOfDays(int nod) {
			number_of_days = nod;
		}

		int checkout() {
			if (number_of_days > 7) {
				rent = (per_day * (number_of_days - 1));
			}
			else {
				rent = (per_day * number_of_days);
			}

			return rent;
		}

		void display() {
			cout << "Customer Name: " << name << endl;
			cout << "Number of days stay: " << number_of_days << endl;
			cout << "Rent: " << checkout() << endl;
		}
};

int main(){
	HotelMercato c1("Wali Yar Khan", 9);

	c1.display();
}