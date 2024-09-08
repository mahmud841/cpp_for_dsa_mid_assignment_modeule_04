#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int best_id = 4;
        int best_marks = -1;
        string best_name;
        char best_section;

        // 3 students infor mation
        for (int i = 0; i < 3; i++)
        {
            int id, marks;
            string name;
            char section;
            cin >> id >> name >> section >> marks;

            // Check
            if (marks > best_marks || (marks == best_marks && id < best_id))
            {
                best_id = id;           // update
                best_marks = marks;     // update
                best_name = name;       // update
                best_section = section; // update
            }
        }
        //best student's details
        cout << best_id << " " << best_name << " " << best_section << " " << best_marks << endl;
    }

    return 0;
}
