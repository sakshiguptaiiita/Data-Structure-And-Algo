class RandomizedSet {
public:
    /** Initialize your data structure here. */
    unordered_set<int>mp;
    RandomizedSet() {
        mp.clear();
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(mp.find(val)==mp.end()){
            mp.insert(val);
           return true;
        }
        return false;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        auto d=mp.find(val);
        if(d==mp.end()) return false;
        
        mp.erase(d);
        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        int ran=rand()%mp.size();
        auto it = mp.begin();
        for(int i=0;i<ran;i++,it++);
        return *it;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */