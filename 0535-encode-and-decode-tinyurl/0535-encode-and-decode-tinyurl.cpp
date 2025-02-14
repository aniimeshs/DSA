class Solution {
public:
    map<int, string> m;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        m[m.size()] = longUrl;
        return "http://tinyurl.com/" + to_string(m.size() - 1);
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        int idx = shortUrl.rfind('/');
        return m[stoi(shortUrl.substr(idx + 1))];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));