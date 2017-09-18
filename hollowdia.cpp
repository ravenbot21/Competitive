#include <iostream>
using namespace std;
int main() {
 char prnt = '*';
 int i, j, k, s, nos = -1;
 for (i = 5; i >= 1; i--) {
  for (j = 1; j <= i; j++) {  cout<<prnt; }
  for (s = nos; s >= 1; s--) {
   cout<<" ";
  }
  for (k = 1; k <= i; k++) {
   if (i == 5 && k == 5) {
    continue;
   }
   cout<<prnt;//printf("%2c", prnt);
  }
  nos = nos + 2;
  cout<<endl;//printf("\n");
 }
 nos = 5;
 for (i = 2; i <= 5; i++) {
  for (j = 1; j <= i; j++)
 {
cout<<prnt;//printfc", prnt);
}
 for (s = nos; s >= 1; s--)
 {
   cout<<" ";//printf("  ");
  }
  for (k = 1; k <= i; k++) {
   if (i == 5 && k == 5) {
    break;
   }
   cout<<prnt;//printf("%2c", prnt);
  }
  nos = nos - 2;
  cout<<endl;//printf("\n");
 }
 return 0;
}
