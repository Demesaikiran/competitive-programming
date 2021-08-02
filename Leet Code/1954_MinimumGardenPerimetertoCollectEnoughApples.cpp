class Solution {
public:
    long long minimumPerimeter(long long neededApples) {
        
        if(neededApples == 0) return 1;
        
        long long prev=0;
        int index =1;
        long long octa = 0;
        
        while(neededApples > prev) {
            
            // MOTO: previous - (index -1) + (index * 2) + ((index * 2) -1)
            octa = octa + 3*index;

            //Octa part of a square and multiplying with 8 and removing repeated apples [Along axis] [Corner Apples]
            long long squareplot = octa * 8 - (index * 8) - (index * 4);
            prev = prev + squareplot;
            
            index++;
        }
        return 8 * (index-1);
    }
};