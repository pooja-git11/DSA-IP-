class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       //Your code here
       int total_distance = 0, total_petrol = 0;
       for(int i = 0; i < n; i++){
           total_distance += p[i].distance;
           total_petrol += p[i].petrol;
       }
       if(total_distance > total_petrol)
            return -1;
       int start = 0, curr_petrol = p[0].petrol - p[0].distance;
       for(int i = 1; i < n; i++){
           
           if(curr_petrol < 0){
               start = i;
               curr_petrol = 0;
           }
           curr_petrol += p[i].petrol - p[i].distance;
       }
       
       return start;
    }
};
