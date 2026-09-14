class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {

        int height=min(rec2[3],rec1[3])-max(rec1[1],rec2[1]);
        int width=min(rec2[2],rec1[2])-max(rec1[0],rec2[0]);

        return (height>0) && (width>0);
        
    }
};