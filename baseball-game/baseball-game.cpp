class Solution {
public:
    int calPoints(vector<string>& ops) {
        if(ops.size()==0){
            return 0;
        }
        if(ops.size()==1){
            return stoi(ops.at(0));
        }
        vector<int> record;
        for(auto i:ops){
            if(i=="+"){
                record.push_back(record.at(record.size()-1) + record.at(record.size()-2));
            } else if(i=="D"){
                record.push_back(2*record.back());
            } else if(i=="C"){
                record.pop_back();
            } else {
                record.push_back(stoi(i));
            }
        }
        return accumulate(record.begin(), record.end(),0);
        
    }
};