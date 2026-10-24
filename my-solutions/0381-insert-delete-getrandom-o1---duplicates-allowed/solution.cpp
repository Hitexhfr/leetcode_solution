class RandomizedCollection {
public:
    vector <int> vec;
    unordered_map <int,int> mp;
    RandomizedCollection() {}
    
    bool insert(int val) {
        if(mp[val]==0){
            vec.push_back(val);
            mp[val]++;
            return true;
        }
        else if(mp[val]>0){
            vec.push_back(val);
            mp[val]++;
            return false;
        }
        return false;
    }
    
    bool remove(int val) {
        if(mp[val]>0){
            auto it = find(vec.begin(),vec.end(),val);
            vec.erase(it);
            mp[val]--;
            return true;
        }
        return false;
    }
    
    int getRandom() {
        int n = vec.size();
        int randomIdx = rand()%n;
        return vec[randomIdx];
    }
};

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
