class EventManager {
public:
    unordered_map<int,int>mp;
    priority_queue<pair<int, int>>pq;
    
    EventManager(vector<vector<int>>& events) {
        for(int i=0;i<events.size();i++) {
            mp[events[i][0]] = events[i][1]; 
            pq.push({events[i][1], -events[i][0]});
        }
    }
    
    void updatePriority(int eventId, int newPriority) {
        mp[eventId] = newPriority;
        pq.push({newPriority, -eventId});
    }
    
    int pollHighest() {
        while(!pq.empty()) {
            auto ele = pq.top();
            int eventID = -ele.second;
            if(mp[eventID] == ele.first) {
                pq.pop();mp.erase(eventID);
                return eventID;
            }
            pq.pop();
        }
        return -1;
    }
};

/**
 * Your EventManager object will be instantiated and called as such:
 * EventManager* obj = new EventManager(events);
 * obj->updatePriority(eventId,newPriority);
 * int param_2 = obj->pollHighest();
 */