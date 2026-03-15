//   ATTEMPTED

class AuctionSystem {
    // itemId -> { userId -> bidAmount }
    unordered_map<int, unordered_map<int, int>> mp;

public:
    AuctionSystem() {}
    
    void addBid(int userId, int itemId, int bidAmount) {
        mp[itemId][userId] = bidAmount;
    }
    
    void updateBid(int userId, int itemId, int newAmount) {
        mp[itemId][userId] = newAmount;
    }
    
    void removeBid(int userId, int itemId) {
        mp[itemId].erase(userId);
    }
    
    int getHighestBidder(int itemId) {
        // Check if the item has any bids
        if (mp.find(itemId) == mp.end() || mp[itemId].empty()) {
            return -1;
        }

        int highestBidder = -1;
        int maxAmount = -1;

        //iterates through all USERS for the given ITEM
        for(auto const& [userId, bidAmount] : mp[itemId]) {
            if (bidAmount > maxAmount) {
                maxAmount = bidAmount;
                highestBidder = userId;
            } 
            else if (bidAmount == maxAmount) {
                // Tie-break: highest userId
                if (userId > highestBidder) {
                    highestBidder = userId;
                }
            }
        }
        return highestBidder;
    }
};