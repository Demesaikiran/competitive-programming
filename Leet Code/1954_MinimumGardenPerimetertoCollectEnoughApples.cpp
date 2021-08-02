class Solution {
public:
    long long minimumPerimeter(long long neededApples) {
        
        if(neededApples == 0) return 1;
        
        long long prev=0;
        int index =1;
        long long octa = 0;
        
        
        while(neededApples > prev) {
            
            
            octa = octa + 3*index;
            
            
            long long squareplot = octa * 8 - (index * 8) - (index * 4);
            prev = prev + squareplot;
            
            index++;
            
        }
        
        return 8 * (index-1);
    }
};