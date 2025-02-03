#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<pair<int, int>> people(n);
        for (int i = 0; i < n; i++) {
            cin >> people[i].first >> people[i].second;
        }

        // Sort people based on their starting positions
        sort(people.begin(), people.end());

        // PBDS simulation using a set
        set<int> active_set;
        int greetings = 0;

        // Process each person
        for (int i = 0; i < n; i++) {
            int start = people[i].first;
            int end = people[i].second;

            // Count how many people in the active set will greet this person
            auto it = active_set.lower_bound(start);
            greetings += distance(it, active_set.end());

            // Add the destination of the current person to the set
            active_set.insert(end);
        }

        cout << greetings << endl;
    }

    return 0;
}
