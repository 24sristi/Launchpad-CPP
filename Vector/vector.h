class vector
{
private:
    int cs;
    int ms;
    int *arr;
public:
    vector()
    {
        cs=0;
        ms=1;
        arr = new int[ms];
    };
    void push_back(int d)
    {
        if(cs==ms)
        {
            int *oldArr = arr;
            arr = new int[2*ms];
            ms = 2*ms;
            for (int i = 0; i < cs; i++)
            {
                arr[i]=oldArr[i];
            }
            delete [] oldArr;
            
        }
        arr[cs]=d;
        cs++;
    }
    void pop_back()
    {
        cs--;
    }
    int front()
    {
        return arr[0];
    }
    int end()
    {
        return arr[cs-1];
    }
    bool empty()
    {
        return cs==0;
    }
    int capacity()
    {
        return ms;
    }
    int size()
    {
        return cs;
    }
    int at (const int i)
    {
        return arr[i];
    }
    int operator[] (const int i)
    {
        return arr[i];
    } 
};

