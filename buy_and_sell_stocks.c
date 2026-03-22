//Maximize the profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
//Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
int maxProfit(int* prices, int pricesSize) 
{
    if(pricesSize<2) return 0;
    int min = prices[0];
    int max =0, profit = 0;
    for(int i =1;i<pricesSize;i++)
    {
        if(prices[i]<min)
        {
            min = prices[i];
        }
    else
        {
            profit = prices[i] - min; 
            if(profit>max)
            {
                max = profit;
            }
        }  
   }
   return max;
    

}
