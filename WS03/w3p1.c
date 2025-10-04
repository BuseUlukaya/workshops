/*
*****************************************************************************
                          Workshop - #3 (P1)

*****************************************************************************
*/

#include <stdio.h>

int main(){
// You must use this variable in #3 data analysis section!
const double test_value = 330.99;
const int product_one_id = 111;
const int product_two_id = 222;
const int product_three_id = 111;
const float product_one_price = 111.4900;
const float product_two_price = 222.9900;
const float product_three_price = 334.4900;
const char product_one_taxed = 'Y';
const char product_two_taxed = 'N';
const char product_three_taxed = 'N';

double average_of_prices = (product_one_price + product_two_price + product_three_price) / 3;

printf("Product Information\n");
printf("===================\n");
printf("Product-1 (ID:%d)\n", product_one_id);
printf(" Taxed: %c\n", product_one_taxed);
printf(" Price: $%3.4f\n\n\n", product_one_price);

printf("Product-2 (ID:%d)\n", product_two_id);
printf(" Taxed: %c\n", product_two_taxed);
printf(" Price: $%3.4f\n\n\n", product_two_price);

printf("Product-3 (ID:%d)\n", product_three_id);
printf(" Taxed: %c\n", product_three_taxed);
printf(" Price: $%3.4f\n\n", product_three_price);

printf("The average of all prices is: $%3.4f\n\n\n", average_of_prices);

printf("About Relational and Logical Expressions!\n");
printf("======================================== \n");
printf("1. These expressions evaluate to TRUE or FALSE \n");
printf("2. FALSE: is always represented by integer value 0\n");
printf("3. TRUE : is represented by any integer value other than 0\n\n\n");

printf("Some Data Analysis...\n");
printf("=====================\n");

printf("1. Is product 1 taxable ? -> %d\n\n",
       (product_one_taxed == 'Y'));

printf("2. Are products 2 and 3 both NOT taxable (N) ? -> %d\n\n",
       (product_two_taxed == 'N' && product_three_taxed == 'N'));

printf("3. Is product 3 less than test_value ($%3.2lf) ? -> %d\n\n",
       test_value,
       (product_three_price < test_value));

printf("4. Is the price of product 3 more than both product 1 and 2 combined ? -> %d\n\n",
       (product_three_price > product_one_price + product_two_price));


printf("5. Is the price of product 1 equal to or more than the price difference "
       "of product 3 LESS product 2 ? -> %d "
       "(price difference: $%3.2f)\n\n",
       (product_one_price >= (product_three_price - product_two_price)),
       (product_three_price - product_two_price));

printf("6. Is the price of product 2 equal to or more than the average price ? -> %d \n\n",
       (product_two_price > average_of_prices || product_two_price == average_of_prices));

printf("7. Based on product ID, product 1 is unique ->  %d\n\n",
       (product_one_id != product_two_id) && (product_one_id != product_three_id));

printf("8. Based on product ID, product 2 is unique -> %d\n\n",
       (product_two_id != product_one_id) && (product_two_id != product_three_id));

printf("9. Based on product ID, product 3 is unique -> %d\n\n",
       (product_three_id != product_one_id) && (product_three_id != product_two_id));

	return 0;

}


