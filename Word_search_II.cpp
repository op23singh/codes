#include<bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;i++)
#define ll long long int
#define pb push_back
#define endl '\n'
#define vi vector<ll>
#define mod 1000000007
#define vii vector<int>
#define e 0b01110100011101000111010001110100
#define fio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;

template<typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }

template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type>
ostream &operator<<(ostream &os, const T_container &v) {
    os << '{';
    string sep;
    for (const T &x : v) os << sep << x, sep = ", ";
    return os << '}';
}

void dbg_out() { cerr << endl; }

template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}

#ifdef DEBUG
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

void print_array(ll a[], ll n) {
    for (int i = 0; i < n; i++)cout << a[i] << ' ';
}

ll power(long long x, unsigned int y, ll p) {
    ll res = 1;
    x = x % p;
    if (x == 0) return 0;
    while (y > 0) {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

void f_io() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}

template<typename T1, typename T2>
class Graph {
public:
    unordered_map<T1, vector<T2>> adj;

    Graph() = default;

    void add_edge(T1 n1, T2 n2, bool bidr = true) {
        adj[n1].pb(n2);
        if (bidr)adj[n2].pb(n2);
    }

    void print() {
        for (auto ele:adj) {
            cout << ele.first << "->";
            for (auto el:ele.second) {
                cout << el << ", ";
            }
            cout << endl;
        }
    }
};

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
unordered_set<string> prefix, word_list;
vector<string> ans;
bool solve(string formed, vector<vector<char> > &board, int x, int y) {
    char temp=board[x][y];
    int n = board.size();
    int m = board[0].size();
    if (prefix.find(formed)==prefix.end()) return false;
    if(word_list.find(formed)!=word_list.end()){
        word_list.erase(formed);
        ans.push_back(formed);
        return true;
    }
    board[x][y]='#';
    for (int i = 0; i < 4; i++) {
        int newx = x + dx[i];
        int newy = y + dy[i];
        if (newx >= 0 and newx < n and newy >= 0 and newy < m) {
            if (solve(formed+board[newx][newy], board, newx, newy)){
                board[x][y]=temp;
                return true;
            }
        }
    }
    board[x][y]=temp;
    return false;
}
vector<string> findWords(vector<vector<char>> &board, vector<string> &words) {
    int n=board.size();
    int m=board[0].size();
    for (string w:words) {
        string s;
        if(w.size()<=n*m) {
            word_list.insert(w);
            for (int i = 0; i < w.size(); i++) {
                s.push_back(w[i]);
                prefix.insert(s);
            }
        }
    }
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                string x;
                x.push_back(board[i][j]);
                solve(x,board,i,j);
            }
        }
    return ans;
}
//vector<string> findWords(vector<vector<char>> &board, vector<string> &words) {
//    unordered_set<string> prefix, word_list, ans;
//    int n = board.size();
//    int m = board[0].size();
//        for (string w:words) {
//            string s;
//            if(w.size()<=n*m) {
//                word_list.insert(w);
//                for (int i = 0; i < w.size(); i++) {
//                    s.push_back(w[i]);
//                    prefix.insert(s);
//                }
//            }
//        }
//        queue<tuple<int, int, string>> q;
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < m; j++) {
//                string x;
//                x.push_back(board[i][j]);
//                q.push({i, j, x});
//            }
//        }
//        while (!q.empty()) {
//            auto curr = q.front();
//            q.pop();
//            int x = get<0>(curr);
//            int y = get<1>(curr);
//            char temp=board[x][y];
//            string current = get<2>(curr);
//            if (prefix.find(current) != prefix.end()) {
//                board[x][y]='#';
//                if (word_list.find(current) != word_list.end()) {
//                    ans.insert(current);
//                }
//                for (int i = 0; i < 4; i++) {
//                    int newx = x + dx[i];
//                    int newy = y + dy[i];
//                    if (newx >= 0 and newx < n and newy >= 0 and newy < m and board[newx][newy] != '#') {
//                        q.push({newx, newy, current + board[newx][newy]});
//                    }
//                }
//                board[x][y]=temp;
//            }
//        }
//    vector<string> ans1(ans.begin(), ans.end());
//    return ans1;
//}

int main() {
    fio;
    f_io();
    vector<vector<char> > board =
            {
//                {'o','a','a','n'},{'e','t','a','e'},{'i','h','k','r'},{'i','f','l','v'}
//                {'a','a'}
                    {'b', 'a', 'b', 'a', 'b', 'a', 'b', 'a', 'b', 'a'},
                    {'a', 'b', 'a', 'b', 'a', 'b', 'a', 'b', 'a', 'b'},
                    {'b', 'a', 'b', 'a', 'b', 'a', 'b', 'a', 'b', 'a'},
                    {'a', 'b', 'a', 'b', 'a', 'b', 'a', 'b', 'a', 'b'},
                    {'b', 'a', 'b', 'a', 'b', 'a', 'b', 'a', 'b', 'a'},
                    {'a', 'b', 'a', 'b', 'a', 'b', 'a', 'b', 'a', 'b'},
                    {'b', 'a', 'b', 'a', 'b', 'a', 'b', 'a', 'b', 'a'},
                    {'a', 'b', 'a', 'b', 'a', 'b', 'a', 'b', 'a', 'b'},
                    {'b', 'a', 'b', 'a', 'b', 'a', 'b', 'a', 'b', 'a'},
                    {'a', 'b', 'a', 'b', 'a', 'b', 'a', 'b', 'a', 'b'}
            };
    vector<string> words = {
//            "oath","pea","eat","rain"
//            "aaa"
            "ababababaa", "ababababab", "ababababac", "ababababad", "ababababae", "ababababaf",
            "ababababag", "ababababah", "ababababai", "ababababaj", "ababababak", "ababababal",
            "ababababam", "ababababan", "ababababao", "ababababap", "ababababaq", "ababababar",
            "ababababas", "ababababat", "ababababau", "ababababav", "ababababaw", "ababababax",
            "ababababay", "ababababaz", "ababababba", "ababababbb", "ababababbc", "ababababbd",
            "ababababbe", "ababababbf", "ababababbg", "ababababbh", "ababababbi", "ababababbj",
            "ababababbk", "ababababbl", "ababababbm", "ababababbn", "ababababbo", "ababababbp",
            "ababababbq", "ababababbr", "ababababbs", "ababababbt", "ababababbu", "ababababbv",
            "ababababbw", "ababababbx", "ababababby", "ababababbz", "ababababca", "ababababcb",
            "ababababcc", "ababababcd", "ababababce", "ababababcf", "ababababcg", "ababababch",
            "ababababci", "ababababcj", "ababababck", "ababababcl", "ababababcm", "ababababcn",
            "ababababco", "ababababcp", "ababababcq", "ababababcr", "ababababcs", "ababababct",
            "ababababcu", "ababababcv", "ababababcw", "ababababcx", "ababababcy", "ababababcz",
            "ababababda", "ababababdb", "ababababdc", "ababababdd", "ababababde", "ababababdf",
            "ababababdg", "ababababdh", "ababababdi", "ababababdj", "ababababdk", "ababababdl",
            "ababababdm", "ababababdn", "ababababdo", "ababababdp", "ababababdq", "ababababdr",
            "ababababds", "ababababdt", "ababababdu", "ababababdv", "ababababdw", "ababababdx",
            "ababababdy", "ababababdz", "ababababea", "ababababeb", "ababababec", "ababababed",
            "ababababee", "ababababef", "ababababeg", "ababababeh", "ababababei", "ababababej",
            "ababababek", "ababababel", "ababababem", "ababababen", "ababababeo", "ababababep",
            "ababababeq", "ababababer", "ababababes", "ababababet", "ababababeu", "ababababev",
            "ababababew", "ababababex", "ababababey", "ababababez", "ababababfa", "ababababfb",
            "ababababfc", "ababababfd", "ababababfe", "ababababff", "ababababfg", "ababababfh",
            "ababababfi", "ababababfj", "ababababfk", "ababababfl", "ababababfm", "ababababfn",
            "ababababfo", "ababababfp", "ababababfq", "ababababfr", "ababababfs", "ababababft",
            "ababababfu", "ababababfv", "ababababfw", "ababababfx", "ababababfy", "ababababfz",
            "ababababga", "ababababgb", "ababababgc", "ababababgd", "ababababge", "ababababgf",
            "ababababgg", "ababababgh", "ababababgi", "ababababgj", "ababababgk", "ababababgl",
            "ababababgm", "ababababgn", "ababababgo", "ababababgp", "ababababgq", "ababababgr",
            "ababababgs", "ababababgt", "ababababgu", "ababababgv", "ababababgw", "ababababgx",
            "ababababgy", "ababababgz", "ababababha", "ababababhb", "ababababhc", "ababababhd",
            "ababababhe", "ababababhf", "ababababhg", "ababababhh", "ababababhi", "ababababhj",
            "ababababhk", "ababababhl", "ababababhm", "ababababhn", "ababababho", "ababababhp",
            "ababababhq", "ababababhr", "ababababhs", "ababababht", "ababababhu", "ababababhv",
            "ababababhw", "ababababhx", "ababababhy", "ababababhz", "ababababia", "ababababib",
            "ababababic", "ababababid", "ababababie", "ababababif", "ababababig", "ababababih",
            "ababababii", "ababababij", "ababababik", "ababababil", "ababababim", "ababababin",
            "ababababio", "ababababip", "ababababiq", "ababababir", "ababababis", "ababababit",
            "ababababiu", "ababababiv", "ababababiw", "ababababix", "ababababiy", "ababababiz",
            "ababababja", "ababababjb", "ababababjc", "ababababjd", "ababababje", "ababababjf",
            "ababababjg", "ababababjh", "ababababji", "ababababjj", "ababababjk", "ababababjl",
            "ababababjm", "ababababjn", "ababababjo", "ababababjp", "ababababjq", "ababababjr",
            "ababababjs", "ababababjt", "ababababju", "ababababjv", "ababababjw", "ababababjx",
            "ababababjy", "ababababjz", "ababababka", "ababababkb", "ababababkc", "ababababkd",
            "ababababke", "ababababkf", "ababababkg", "ababababkh", "ababababki", "ababababkj",
            "ababababkk", "ababababkl", "ababababkm", "ababababkn", "ababababko", "ababababkp",
            "ababababkq", "ababababkr", "ababababks", "ababababkt", "ababababku", "ababababkv",
            "ababababkw", "ababababkx", "ababababky", "ababababkz", "ababababla", "abababablb",
            "abababablc", "ababababld", "abababable", "abababablf", "abababablg", "abababablh",
            "ababababli", "abababablj", "abababablk", "ababababll", "abababablm", "ababababln",
            "abababablo", "abababablp", "abababablq", "abababablr", "ababababls", "abababablt",
            "abababablu", "abababablv", "abababablw", "abababablx", "abababably", "abababablz",
            "ababababma", "ababababmb", "ababababmc", "ababababmd", "ababababme", "ababababmf",
            "ababababmg", "ababababmh", "ababababmi", "ababababmj", "ababababmk", "ababababml",
            "ababababmm", "ababababmn", "ababababmo", "ababababmp", "ababababmq", "ababababmr",
            "ababababms", "ababababmt", "ababababmu", "ababababmv", "ababababmw", "ababababmx",
            "ababababmy", "ababababmz", "ababababna", "ababababnb", "ababababnc", "ababababnd",
            "ababababne", "ababababnf", "ababababng", "ababababnh", "ababababni", "ababababnj",
            "ababababnk", "ababababnl", "ababababnm", "ababababnn", "ababababno", "ababababnp",
            "ababababnq", "ababababnr", "ababababns", "ababababnt", "ababababnu", "ababababnv",
            "ababababnw", "ababababnx", "ababababny", "ababababnz", "ababababoa", "ababababob",
            "ababababoc", "ababababod", "ababababoe", "ababababof", "ababababog", "ababababoh",
            "ababababoi", "ababababoj", "ababababok", "ababababol", "ababababom", "ababababon",
            "ababababoo", "ababababop", "ababababoq", "ababababor", "ababababos", "ababababot",
            "ababababou", "ababababov", "ababababow", "ababababox", "ababababoy", "ababababoz",
            "ababababpa", "ababababpb", "ababababpc", "ababababpd", "ababababpe", "ababababpf",
            "ababababpg", "ababababph", "ababababpi", "ababababpj", "ababababpk", "ababababpl",
            "ababababpm", "ababababpn", "ababababpo", "ababababpp", "ababababpq", "ababababpr",
            "ababababps", "ababababpt", "ababababpu", "ababababpv", "ababababpw", "ababababpx",
            "ababababpy", "ababababpz", "ababababqa", "ababababqb", "ababababqc", "ababababqd",
            "ababababqe", "ababababqf", "ababababqg", "ababababqh", "ababababqi", "ababababqj",
            "ababababqk", "ababababql", "ababababqm", "ababababqn", "ababababqo", "ababababqp",
            "ababababqq", "ababababqr", "ababababqs", "ababababqt", "ababababqu", "ababababqv",
            "ababababqw", "ababababqx", "ababababqy", "ababababqz", "ababababra", "ababababrb",
            "ababababrc", "ababababrd", "ababababre", "ababababrf", "ababababrg", "ababababrh",
            "ababababri", "ababababrj", "ababababrk", "ababababrl", "ababababrm", "ababababrn",
            "ababababro", "ababababrp", "ababababrq", "ababababrr", "ababababrs", "ababababrt",
            "ababababru", "ababababrv", "ababababrw", "ababababrx", "ababababry", "ababababrz",
            "ababababsa", "ababababsb", "ababababsc", "ababababsd", "ababababse", "ababababsf",
            "ababababsg", "ababababsh", "ababababsi", "ababababsj", "ababababsk", "ababababsl",
            "ababababsm", "ababababsn", "ababababso", "ababababsp", "ababababsq", "ababababsr",
            "ababababss", "ababababst", "ababababsu", "ababababsv", "ababababsw", "ababababsx",
            "ababababsy", "ababababsz", "ababababta", "ababababtb", "ababababtc", "ababababtd",
            "ababababte", "ababababtf", "ababababtg", "ababababth", "ababababti", "ababababtj",
            "ababababtk", "ababababtl", "ababababtm", "ababababtn", "ababababto", "ababababtp",
            "ababababtq", "ababababtr", "ababababts", "ababababtt", "ababababtu", "ababababtv",
            "ababababtw", "ababababtx", "ababababty", "ababababtz", "ababababua", "ababababub",
            "ababababuc", "ababababud", "ababababue", "ababababuf", "ababababug", "ababababuh",
            "ababababui", "ababababuj", "ababababuk", "ababababul", "ababababum", "ababababun",
            "ababababuo", "ababababup", "ababababuq", "ababababur", "ababababus", "ababababut",
            "ababababuu", "ababababuv", "ababababuw", "ababababux", "ababababuy", "ababababuz",
            "ababababva", "ababababvb", "ababababvc", "ababababvd", "ababababve", "ababababvf",
            "ababababvg", "ababababvh", "ababababvi", "ababababvj", "ababababvk", "ababababvl",
            "ababababvm", "ababababvn", "ababababvo", "ababababvp", "ababababvq", "ababababvr",
            "ababababvs", "ababababvt", "ababababvu", "ababababvv", "ababababvw", "ababababvx",
            "ababababvy", "ababababvz", "ababababwa", "ababababwb", "ababababwc", "ababababwd",
            "ababababwe", "ababababwf", "ababababwg", "ababababwh", "ababababwi", "ababababwj",
            "ababababwk", "ababababwl", "ababababwm", "ababababwn", "ababababwo", "ababababwp",
            "ababababwq", "ababababwr", "ababababws", "ababababwt", "ababababwu", "ababababwv",
            "ababababww", "ababababwx", "ababababwy", "ababababwz", "ababababxa", "ababababxb",
            "ababababxc", "ababababxd", "ababababxe", "ababababxf", "ababababxg", "ababababxh",
            "ababababxi", "ababababxj", "ababababxk", "ababababxl", "ababababxm", "ababababxn",
            "ababababxo", "ababababxp", "ababababxq", "ababababxr", "ababababxs", "ababababxt",
            "ababababxu", "ababababxv", "ababababxw", "ababababxx", "ababababxy", "ababababxz",
            "ababababya", "ababababyb", "ababababyc", "ababababyd", "ababababye", "ababababyf",
            "ababababyg", "ababababyh", "ababababyi", "ababababyj", "ababababyk", "ababababyl",
            "ababababym", "ababababyn", "ababababyo", "ababababyp", "ababababyq", "ababababyr",
            "ababababys", "ababababyt", "ababababyu", "ababababyv", "ababababyw", "ababababyx",
            "ababababyy", "ababababyz", "ababababza", "ababababzb", "ababababzc", "ababababzd",
            "ababababze", "ababababzf", "ababababzg", "ababababzh", "ababababzi", "ababababzj",
            "ababababzk", "ababababzl", "ababababzm", "ababababzn", "ababababzo", "ababababzp",
            "ababababzq", "ababababzr", "ababababzs", "ababababzt", "ababababzu", "ababababzv",
            "ababababzw", "ababababzx", "ababababzy", "ababababzz"
    };
    vector<string> ans = findWords(board, words);
//    dbg_out(board);
    dbg_out(ans);
}