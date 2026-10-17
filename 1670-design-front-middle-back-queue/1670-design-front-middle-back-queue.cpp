class FrontMiddleBackQueue {
public:

    vector<int>arr;
    int size,rear,front,middle;
    FrontMiddleBackQueue() {

        rear=front=-1;
        middle=-1;
        size=0;        
    }
    
    void pushFront(int val) {

        arr.insert(arr.begin(),val);
        size++;
        rear=size-1;
        
    }
    
    void pushMiddle(int val) {

        middle=size/2;
        arr.insert(arr.begin()+middle,val);
        size++;
        rear=size-1;
        
    }
    
    void pushBack(int val) {

        arr.insert(arr.begin()+size,val);

        size++;
        rear=size-1;

        
    }
    
    int popFront() {
        if(arr.empty()) return -1;
        int ele=arr[0];
        arr.erase(arr.begin());
        size--;
        rear=size-1;

        return ele;
        
    }
    
    int popMiddle() {
        if(arr.empty()) return -1;
        middle=(size-1)/2;
        int ele=arr[middle];
        arr.erase(arr.begin()+middle);
        size--;
        rear=size-1;
        
        return ele;
        
    }
    
    int popBack() {
        if(arr.empty()) return -1;

        int ele=arr[rear];
        arr.erase(arr.begin()+rear);
        size--;
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