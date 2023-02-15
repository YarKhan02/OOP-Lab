#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Schedule {
    public:
    struct Activity {
        int start;
        int finish;
    };

    Schedule(vector<Activity> activities) : activities_(activities) {}

    vector<Activity> GetMaxConflictFreeSubset() {
        sort(activities_.begin(), activities_.end(),
                [](const Activity& a, const Activity& b) {
                    return a.finish < b.finish;
                });
        vector<Activity> conflict_free_subset;
        int current_finish = 0;
        for (const auto& activity : activities_) {
        if (activity.start >= current_finish) {
            conflict_free_subset.push_back(activity);
            current_finish = activity.finish;
        }
        }
        return conflict_free_subset;
    }

    private:
        vector<Activity> activities_;
};

int main() {
    vector<Schedule::Activity> activities = {{1, 2}, {3, 4}, {0, 6}, {5, 7}, {8, 9}};
    Schedule schedule(activities);
    vector<Schedule::Activity> conflict_free_subset =
        schedule.GetMaxConflictFreeSubset();

    for (const auto& activity : conflict_free_subset){
        cout << activity.start << " " << activity.finish << endl;
    }
    return 0;
}