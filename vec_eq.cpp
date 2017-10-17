#include <vector>
#include <cassert>

using namespace std;

bool eq(vector<int> v1, vector<int> v2) {
  int i = 0;

  if(v1.size() != v2.size()) {
    return false;
  }

  while(i < v1.size()) {
    if(v1[i] != v2[i]) {
      return false;
    }
    i = i + 1;
  }

  return true;
}
int main() {
  assert(eq( { } , { } ));
  assert(eq( {4,5,6} , {4,5,6} ));
  return 0;
}
