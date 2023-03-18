#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

string FindWidespreadBird(const vector<string>& types) {
    int quantity = 0;
    string bird_name;
    map<string, int> bird_counter;

    for(const auto& bird : types) {
        ++bird_counter[bird];
    }

    for (const auto& [key, value] : bird_counter) {
        if (value > quantity) {
            quantity = value;
            bird_name = key;
        }
    }
    return bird_name;
}

int main() {
    vector<string> bird_types1 = {"zyablik"s, "sinica"s, "vorobey"s, "zyablik"s, "sinica"s, "sinica"s};
    if (FindWidespreadBird(bird_types1) == "sinica"s) {
        cout << "Correct"s << endl;
    } else {
        cout << "Not correct"s << endl;
    }

    vector<string> bird_types2 = {"ruh"s, "sirin"s, "blue bird of fortune"s, "finist"s, "fenix"s};
    if (FindWidespreadBird(bird_types2) == "blue bird of fortune"s ) {
        cout << "Correct"s << endl;
    } else {
        cout << "Not correct"s << endl;
    }
}
