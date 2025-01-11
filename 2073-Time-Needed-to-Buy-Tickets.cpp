class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time = 0;
        int tick_required = tickets[k];
        int i = 0;
        while (tick_required > 0) {
            if (tickets[i] == 0) {
                i = (i + 1) % tickets.size();
            } else {
                time++;

                if (i == k) {
                    tick_required--;
                }
                tickets[i]--;
                i = (i + 1) % tickets.size();
            }
        }
        return time;
    }
};