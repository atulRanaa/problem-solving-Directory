/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */


bool isOverLap(Interval a, Interval b) {
    if (min(a.end, b.end) < max(a.start, b.start)) return false;
    return true;
}

bool operator <(Interval a, Interval b) {
    return a.start < b.start;
}

vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<Interval> ans;
    int start = newInterval.start, end = newInterval.end;
    for (Interval e : intervals) {
        if ( isOverLap(e, newInterval) ) {
            start = min (start, e.start);
            end = max( end, e.end);
        }
        else
            ans.push_back(e);
    }
    ans.push_back( Interval(start, end) );

    sort(ans.begin(), ans.end());
    return ans;
}
