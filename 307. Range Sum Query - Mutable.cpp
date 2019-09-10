///307. Range Sum Query - Mutable
///Author: Ognjen Arsenijevic
///username: ognjen1998
class NumArray 
{
public:
    vector<int> ftMul;
    vector<int> ftAdd;
    void internalUpdate(int idx, int mul, int add)
    {
        for(int i=idx;i<ftMul.size();i+=(i& -i))
        {
            ftMul[i]+=mul;
            ftAdd[i]+=add;
        }
    }
    void update(int l, int r, int val)
    {
        internalUpdate(l, val, -val*(l-1));
        internalUpdate(r, -val, val*r);
    }
    int query(int idx)
    {
        int add=0,mul=0,start=idx;
        for(int i=idx;i>0;i-=(i & -i))
        {
            add+=ftAdd[i];
            mul+=ftMul[i];
        }
        return mul*start+add;
    }
    
    NumArray(vector<int>& v) 
    {
        ftMul.resize(v.size()+5);
        ftAdd.resize(v.size()+5);
        for(int i=0;i<v.size();i++)
            update(i+1,i+1,v[i]);
    }
    
    void update(int i, int val)
    {
        int curr=query(i+1)-query(i);
        update(i+1,i+1,val-curr);    
    }
    
    int sumRange(int i, int j) 
    {
        return query(j+1)-query(i);    
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(i,val);
 * int param_2 = obj->sumRange(i,j);
 */
