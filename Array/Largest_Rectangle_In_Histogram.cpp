class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int>st;
        stack<int>nt;
        vector<int>nsi(n);
        vector<int>psi(n);
        nt.push(n-1);
        nsi[n-1]=n;
        for(int i=n-2;i>=0;i--){
            while(nt.size()>0 && heights[nt.top()]>=heights[i]) nt.pop();
            if(nt.size()==0) nsi[i]=n;
            else nsi[i]=nt.top();
            nt.push(i);
        }
         st.push(0);
        psi[0]=-1;
        for(int i=1;i<n;i++){
            while(st.size()>0 && heights[st.top()]>=heights[i]) st.pop();
            if(st.size()==0) psi[i]=-1;
            else psi[i]=st.top();
            st.push(i);
        }
        int maxm=0;
    for(int i=0;i<n;i++){
        int length=heights[i];
        int breadth=nsi[i]-psi[i]-1;
        maxm=max(maxm,length*breadth);
    }
    return maxm;
    }
};
