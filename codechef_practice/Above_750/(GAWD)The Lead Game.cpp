#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Read number of rounds
    int n;
    cin >> n;

    int score1 = 0; // Cumulative score for player 1
    int score2 = 0; // Cumulative score for player 2
    int max_lead = 0;
    int winner = 0;

    for (int i = 0; i < n; i++)
    {
        int s, t;
        cin >> s >> t;

        // Update cumulative scores
        score1 += s;
        score2 += t;

        // Calculate current lead
        int current_lead = 0;
        int current_leader = 0;

        if (score1 > score2)
        {
            current_lead = score1 - score2;
            current_leader = 1;
        }
        else
        {
            current_lead = score2 - score1;
            current_leader = 2;
        }

        // Update maximum lead if needed
        if (current_lead > max_lead)
        {
            max_lead = current_lead;
            winner = current_leader;
        }
    }

    cout << winner << " " << max_lead;
    return 0;
}
