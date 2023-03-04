#include <iostream>
#include <vector>

using namespace std;

class memberType {
	private:
		string person;
		int memberId, booksBought, amountSpent;

	public:
		memberType(string p, int m, int bb, int a) {
			setPerson(p);
			setMemberID(m);
			setBooksBought(bb);
			setAmountSpent(a);
		}

		void setPerson(string p) {
			person = p;
		}

		string getPerson() {
			return person;
		}

		void setMemberID(int m) {
			memberId = m;
		}

		int getMemberID() {
			return memberId;
		}

		void setBooksBought(int bb) {
			booksBought = bb;
		}

		int getBooksBought() {
			return booksBought;
		}

		void setAmountSpent(int a) {
			amountSpent = a;
		}

		int getAmountSpent() {
			return amountSpent;
		}
};

int main(){
	memberType m("Wali Yar Khan", 2325, 7, 4300);
}
