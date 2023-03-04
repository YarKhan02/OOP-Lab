#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

class Radiator{
    public:
        int radiatorID;
        bool isOn;
        static int count;

        Radiator(string id){
            radiatorID = extraction(id) + count;
            count += 15;
            isOn = false;
        }

        int extraction(string id){
            int length = id.size();
            int start = length - 3;

            string str = id.substr(start, 3);

            int n = stoi(str);

            return n;
        }

        int getRadiatorID(){
            return radiatorID;
        }
};

int Radiator::count = 15;

class Room{
    public: 
        string room_name;
        int seating_capacity;
        vector<Radiator*> num_radiators;

        Room(string roomName){
            room_name = roomName;
            seating_capacity = 12;
        }

        string isHeatedBy(Radiator* radiator){
            if (num_radiators.size() >= 2){
                return "Cannot add Radiator. Room has a maximum number of radiators.";
            }

            for (Radiator* r: num_radiators){
                if ((r -> getRadiatorID()) == radiator -> getRadiatorID()){
                    return "Radiator already added to room.";
                }
            }

            num_radiators.push_back(radiator);

            return "Radiator successfully added to room.";
        }
};

int main(){
    Room room("Gaming Room");
    Radiator rd1("22k-4734");
    Radiator rd2("22k-3091");
    Radiator rd3("22k-1506");

    cout << room.isHeatedBy(&rd1) << endl;
    cout << room.isHeatedBy(&rd2) << endl;
    cout << room.isHeatedBy(&rd3) << endl;
}