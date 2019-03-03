#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string input;
    string output;
    cout << "Enter your 4 digits now: ";
    cin >> input;
    vector<int> coords;

    for(char c : input)
    {
        if (c == ' '){
            continue;
        }

        int conv = (int)c - 48;
        coords.push_back(conv);
    }

    if (coords.at(1) < coords.at(3)){
        output += 'N';
    }
    else if (coords.at(1) > coords.at(3))
    {
        output += 'S';
    }

    if (coords.at(0) < coords.at(2)){
        output += "E";
    }
    else if(coords.at(0) > coords.at(3)){
        output += 'W';
    }

    cout << output << "\n";

    return 0;
}