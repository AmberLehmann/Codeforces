#include "bits/stdc++.h"
using namespace std;

#define uwu {ios_base::sync_with_stdio(false);}
#define owo {cin.tie(NULL);}
#define all(x) (x).begin(), (x).end();
typedef long long int ll;
/*⠀⠀⠀⠀⠀⠀⡤⢤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⢀⠞⠀⢀⣳⠔⠊⢉⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⣠⡎⢀⠔⠋⠀⠀⣠⣎⣀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⡸⢸⠾⣅⡀⠐⡄⠈⠁⠀⠀⢀⡼⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⢀⠗⠓⠢⡄⠙⡆⠘⢀⣠⠴⠚⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⠤⠤⢤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⡠⠋⠀⠀⠀⢸⣀⡷⠚⠉⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡠⠖⠋⠁⠀⠀⠀⣸⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⡰⠁⠀⠀⠀⣠⡞⢹⡆⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⣠⠖⠉⠀⠀⠀⠀⠀⠀⣰⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⢠⡇⠀⠀⣠⠊⠀⡇⠸⡇⠀⢀⡇⠀⠀⣀⠀⠀⠀⢠⠞⠁⠀⣀⡀⠀⠀⠀⢀⣼⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠈⡇⠀⢰⢻⠀⠀⡇⢰⡇⠀⣸⠀⣰⠋⠈⢳⡀⡴⠃⢀⡴⠊⢡⠃⠀⠀⡰⢫⠏⠀⠀⠀⠀⠀⠀⠀⢀⣠⠤⠒⠉⣩⠇⠀
⠀⠈⠦⣝⠘⡆⠀⢇⢸⠁⢠⠟⢶⠃⠀⠀⡀⢿⠁⡰⠋⠀⡰⠃⠀⠀⢋⡴⠃⠀⠀⠀⠀⠀⢀⣴⠚⠯⡀⠀⠀⠈⢉⣩⠇
⠀⠀⠀⢿⡛⠻⣄⡘⡏⠀⣾⣀⡎⠀⠀⡸⠀⠘⡼⠁⣠⣾⠥⠤⠤⢶⡋⠀⠀⠀⠀⠀⡠⠞⠁⠈⠙⡆⢹⣠⠴⠊⠉⠀⠀
⠀⠀⠀⢠⡵⢤⠀⠙⠂⠈⠁⠀⢇⠀⠀⢇⠀⠀⠛⠉⠁⣸⠀⠀⠀⢸⠃⠀⠀⢀⡤⠊⠀⠀⠀⠀⢀⡿⠚⠁⠀⠀⠀⠀⠀
⠀⠀⠀⠀⢩⣯⠖⢋⠑⠲⣄⠀⠘⠦⠤⠼⠚⣿⣀⣠⠔⠁⠀⠀⣠⠏⢀⣠⠔⠋⠀⠀⠀⠀⣠⠖⠻⡄⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⡞⢁⠞⢩⠙⡆⠘⡆⢀⡴⠊⣉⠙⢾⣀⣀⣀⡠⠴⠞⠓⠒⠉⠀⠀⠀⠀⢀⡤⠞⢹⠀⠀⢳⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⢰⠃⢸⠀⠸⢤⡇⠀⣱⠋⣰⠛⡏⢣⠘⡆⠈⠓⠦⢄⣀⣀⣀⣀⣀⡠⠴⠚⠁⠀⠀⡜⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠸⡄⠈⠓⠒⠊⠀⠠⠤⠀⢧⠒⠁⡼⢠⠃⠀⠀⠀⠀⣀⣀⣀⠀⠀⠀⠀⠀⠀⠀⣰⠃⠀⠀⣼⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠙⣦⠤⣄⠀⠳⢤⡠⠴⢪⡑⠋⢀⡼⠀⢀⡠⠒⠉⠀⠀⢀⣉⡲⣄⠀⠀⠀⡴⠃⠀⠀⢀⡇⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⡇⠀⡌⠳⣵⠋⣇⠀⢠⡷⠚⠉⢀⠔⠋⠀⠀⣠⠔⠫⣅⠀⠈⠈⢳⣤⠞⠁⢀⣀⡤⣾⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⢧⠀⢱⡀⡁⢀⡇⠀⡼⣙⡦⠞⠁⠀⠀⢠⣞⣁⡤⠤⢬⣳⣠⠴⠊⠀⠀⠒⠉⣠⠔⠃⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⡼⠣⣀⡽⠛⢯⣀⠾⣉⡁⠀⠀⣀⡠⠞⠁⠀⠀⠀⠀⠀⠀⠉⠢⡤⠤⢶⠒⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⢀⡞⠀⢠⢿⠀⠀⠁⠀⠀⠀⠈⠉⠉⠀⠀⠀⠀⠀⠀⠀⣰⠂⠀⠀⠀⠘⢆⠸⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⡼⠀⠀⡞⢸⠀⠀⠀⠀⢠⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠃⠀⠀⠀⠀⠀⠘⣆⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⣇⠀⠀⣷⡘⡆⠱⣄⠀⡞⠀⠀⠀⠀⢀⠀⡀⠀⠀⣀⣘⠀⠀⠀⠀⠀⠀⠀⠸⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠘⣄⠀⢹⡉⠻⡄⠈⢲⠁⠀⠀⠀⢀⣎⡤⠤⠔⢶⠤⠌⣧⡀⠀⠀⠀⠀⠀⠀⢳⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠈⠓⠤⣑⡄⠱⡄⡏⠀⠀⠀⣠⠏⠁⠀⠀⠀⠈⠣⡀⠀⠈⠓⣤⣀⠀⠀⠀⠈⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⣻⠁⠀⢀⡜⢹⡄⠀⠀⠀⠀⠀⠀⠙⢦⡀⠀⢸⡈⠑⡆⠀⠀⡗⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⢀⣀⣀⣀⣠⠇⠀⢠⠎⠀⣸⠁⠀⠀⠀⠀⠀⠀⠀⢀⡇⢀⣼⠁⢀⡇⠀⣰⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠈⠣⣀⠀⡾⣄⢴⠯⢤⡴⡇⠀⠀⠀⠀⠀⠀⠀⠀⡼⠛⢱⠇⠀⢸⠷⢋⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠠⣞⣉⣁⡼⠁⢡⣿⣶⠋⢰⡇⠀⠀⠀⠀⠀⠀⢀⡴⠃⢠⠏⠀⣰⠇⠀⡾⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⣠⢋⡀⢀⡞⢸⣳⣠⠞⠀⠀⠀⠀⠀⠀⠀⠸⠼⠵⠋⠀⣾⢇⣆⡼⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠻⠯⠴⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀*/
const string PAIR_LEFT = "(";
const string PAIR_RIGHT = ")";

// const string IT_LEFT = "";
// const string IT_RIGHT = "";

const string IT_LEFT = "[";
const string IT_RIGHT = "]";

// const string PAIR_LEFT = "{";
// const string PAIR_RIGHT = "}";
// const string IT_LEFT = "{";
// const string IT_RIGHT = "}";

// benq - print any container + pair
template<typename T, typename = void> struct is_iterable : false_type {};
template<typename T> struct is_iterable<T, void_t<decltype(begin(declval<T>())),decltype(end(declval<T>()))>> : true_type {};
template<typename T> typename enable_if<is_iterable<T>::value&&!is_same<T, string>::value,ostream&>::type operator<<(ostream &cout, T const &v);
template<typename A, typename B> ostream& operator<<(ostream &cout, pair<A, B> const &p) { return cout << PAIR_LEFT << p.f << ", " << p.s << PAIR_RIGHT; }
template<typename T> typename enable_if<is_iterable<T>::value&&!is_same<T, string>::value,ostream&>::type operator<<(ostream &cout, T const &v) {
    cout << IT_LEFT; 
    for (auto it = v.begin(); it != v.end();) {
        cout << *it;
        if (++it != v.end()) cout << ", ";
    }
    return cout << IT_RIGHT;
}
template<typename A, typename B> istream& operator>>(istream& cin, pair<A, B> &p) {
    cin >> p.first;
    return cin >> p.second;
}

//Automatically input a vector given size
template<typename T>
istream& operator >>(istream &cin, vector<T> &v) {
  for (auto &x: v) cin >> x;
  return cin;
}
template<typename T> void debug(string s, T x) {cerr << "\033[1;34m" << s << "\033[0;32m = \033[35m" << x << "\033[0m\n";}
template<typename T, typename... Args> void debug(string s, T x, Args... args) {for (int i=0, b=0; i<(int)s.size(); i++) if (s[i] == '(' || s[i] == '{') b++; else
        if (s[i] == ')' || s[i] == '}') b--; else if (s[i] == ',' && b == 0) {cerr << "\033[1;34m" << s.substr(0, i) << "\033[0;32m = \033[35m" << x << "\033[31m | "; debug(s.substr(s.find_first_not_of(' ', i + 1)), args...); break;}}
template<typename T> void debug_nameless(T x) {cerr << "\033[35m" << x << "\033[0m\n";}
template<typename T, typename... Args> void debug_nameless(T x, Args... args) {cerr << "\033[35m" << x << "\033[31m | "; debug_nameless(args...);}

#define pr(...) debug(#__VA_ARGS__, __VA_ARGS__)
#define prs(...) debug_nameless(__VA_ARGS__)
const bool local_ = true;
/* #else
#define pr(...) 135
#define prs(...) 135
const bool local_ = false;
#endif */

bool vowel(char c) {
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y') {
        return true;
    }
    return false;
}

const bool run = local_ ? 0 : 1;
void solve(int T = 0) {
    string str;
    cin >> str;
    int max = -1;
    int count = 1;
    for(int i = 0; i < str.size(); i++) {
        if(vowel(str.at(i))) {
            if (count > max) {
                max = count;
            }
            count = 0;
        }
        count++;
    }
    if(!vowel(str.at(str.size() - 1))) {
        if (count > max) {
            max = count;
        }
    }
    pr(max);
    cout << max; 
} 

int main() {
        auto begin = std::chrono::high_resolution_clock::now();
    
    uwu owo

    cout << setprecision(15) << fixed;
    cerr << setprecision(4) << fixed;
            
    int T = 1;
    // if (local_)
    // if (!run)
    // cin >> T;
    for (int t = 0; t < T; t++) {
        pr(t); prs(string(50, '-'));
        solve(t);
        prs(string(50, '-') + "\n");
    }
    
        auto end = std::chrono::high_resolution_clock::now();
        cerr << setprecision(4) << fixed;
        cerr << "Execution time: " << std::chrono::duration_cast<std::chrono::duration<double>>(end - begin).count() << " seconds" << endl;
}
