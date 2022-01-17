#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <functional>
#include <utility>
#include <tuple>
#include <numeric>
#include <queue>
#include <cstring>
#include <sstream>
#include <iomanip>
#include <regex>
#include <stack>
#include <limits>
#include <climits>

using namespace std;
 
class $CLASSNAME$ {
public:
    $RC$ $METHODNAME$($METHODPARMS$) {

    }
};
 
$BEGINCUT$
 
#include <limits>
inline bool isnan(double a) {
        return (std::numeric_limits<double>::quiet_NaN() == a);
        // return a!=a;
}

inline bool isinf(double a) {
        return (std::numeric_limits<double>::infinity() == a);
}
 
$TESTCODE$
 
$DEFAULTMAIN$
$ENDCUT$