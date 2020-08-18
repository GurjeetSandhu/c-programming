#include "cards.h"
#include <stdio.h>
int main(void) {
  card_t gurjeet = {7, SPADES};
  char a = value_letter(gurjeet);
  char b = suit_letter(gurjeet) ;
  print_card(gurjeet);
  printf("%c %c",a,b);
   } 
