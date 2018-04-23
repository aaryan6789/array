/*
 * buy_sell_stock.c
 *
 *  Created on: Apr 9, 2018
 *      Author: hsahu
 */

#include <stdio.h>
#include <stdlib.h>
#include "array.h"

#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))

int maxProfit(int* stock, int size) {
    int min_value_so_far = stock[0];
	float max_profit = 0.0;
    int max_profit_if_sell_today;

	for(int price_at = 0; price_at < size; price_at++) {
		max_profit_if_sell_today = stock[price_at] - min_value_so_far;
		max_profit = MAX(max_profit, max_profit_if_sell_today);
		min_value_so_far = MIN(min_value_so_far, stock[price_at]);
    }

	printf("Max_profit = %f\n", max_profit);
	return max_profit;
}

/**
 * Determine the maximum profit that can be obtained by making the
 * transactions (no limit on the number of transactions done).
 * For this we need to find out those sets of buying and selling prices
 *  which together lead to the maximization of profit.
 */

int max_profit_many(int *prices, int length) {
	int maxprofit = 0;
    for (int i = 1; i < length; i++) {
    	if (prices[i] > prices[i - 1])
    		maxprofit = maxprofit + (prices[i] - prices[i-1]);
    	}
    printf("Max_profit_many = %d\n", maxprofit);
    return maxprofit;
}
