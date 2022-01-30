/*
Design a logger system that receives a stream of messages along with their timestamps. Each unique message should only be printed at most every 10 seconds (i.e. a message printed at timestamp t will prevent other identical messages from being printed until timestamp t + 10).

All messages will come in chronological order. Several messages may arrive at the same timestamp.
*/
/*
Success
Details 
Runtime: 141 ms, faster than 16.71% of C++ online submissions for Logger Rate Limiter.
Memory Usage: 32.5 MB, less than 27.37% of C++ online submissions for Logger Rate Limiter.
*/


class Logger {
public:
    Logger() {
        
        
    }
    
    bool shouldPrintMessage(int timestamp, string message) {
        
    if(is_present.find(message)==is_present.end())
    {
        is_present[message]=timestamp;
        return true;
    }
        if(timestamp-is_present[message]>=10)
        {
            is_present[message]=timestamp;
            return true;
        }
else
        return false;
            
        
    }
            map<string,int> is_present;

};

/**
 * Your Logger object will be instantiated and called as such:
 * Logger* obj = new Logger();
 * bool param_1 = obj->shouldPrintMessage(timestamp,message);
 */
