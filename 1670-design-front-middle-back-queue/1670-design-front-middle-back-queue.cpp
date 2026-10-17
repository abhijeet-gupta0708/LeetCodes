class FrontMiddleBackQueue {
public:
     vector<int>arr;
     int size,rear,middle,front;

    FrontMiddleBackQueue() {
        arr.resize(1001);
        rear=front=-1;
        middle=-1;
        size=0;
        
    }
    
    void pushFront(int val) {
        // Check if its empty
        if(front==-1)
        {
            front=rear=0;
            arr[front]=val;
        }
        for(int i=size;i>0;i--)
        {
            arr[i]=arr[i-1];
        }        
        arr[0]=val;

        
        size++;
        front=0;
        rear=size-1;
    }
    
    void pushMiddle(int val) {

        middle=size/2;
        for(int i=size;i>middle;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[middle]=val;

        size++;
         front=0;
        rear=size-1;
        
    }
    
    void pushBack(int val) {

        if(size==0)
        {
            rear=front=0;
            arr[0]=val;
        }
        else
        {
        arr[size]=val;
        rear++;
        }
        size++;
         front=0;
        rear=size-1;
        
    }
    
    int popFront() {
        if(size==0)
        {
            front=rear=-1;
            return -1;
        }
        int ele=arr[0];
        for(int i=0;i<size-1;i++)
        {
            arr[i]=arr[i+1];
        }

         front=0;
         size--;
        rear=size-1;
        return ele;
        
    }
    
    int popMiddle() {

        if(size==0) return -1;

        else
        {
            middle=(size-1)/2;
            int ele=arr[middle];
            for(int i=middle;i<size-1;i++)
            {
                arr[i]=arr[i+1];
            }
             front=0;
             size--;
        rear=size-1;

        return ele;

        }
        
    }
    
    int popBack() {

        if(size==0) return -1;
        int ele=arr[rear];
        size--;

         front=0;
        rear=size-1;
        return ele;
        
    }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */