#include <bits/stdc++.h>
#define ASSERT(expected, res)  cout << (expected == res? "\033[1;32mpass\033[0m":"\033[1;31mfail\033[0m" ) << endl;
using namespace std;


class BookShelf{
  public:
  unordered_map<long, long> books;
  long i_left=0, i_right=1;
  
  BookShelf(){}

  void insertLeft(long i){
    books[i]=i_left;
    i_left--;
  }

  void insertRight(long i){
    books[i]=i_right;
    i_right++;
  }
  
  long lenToEdge(long i ){
    auto it = books.find(i);
    if(it ==  books.end())
      return -1;

    return min( max(abs(books[i]-i_left)-1, 0L), max( abs(books[i]-i_right)-1,0L) );
  }

};


int main(){
  int q;
  long i;
  char q_type;

  BookShelf bksf;

  cin >> q;

  while(q--){
    cin >> q_type >> i;
    long res;
    if(q_type =='L'){
      bksf.insertLeft(i);
    }else if(q_type =='R'){
      bksf.insertRight(i);
    }else if(q_type =='?'){
      res=bksf.lenToEdge(i);
      cout << res << endl;
    }
    
  }
  
  return 0;
}
