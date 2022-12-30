use proconio::input;

fn main() {
    input! {
        N: i64,
        X: i64,
        A: [i64; N],
    }
    let mut ans= "No";
    for An in A {
        if An == X {
            ans = "Yes";
            break;
        }
    }
    println!("{}", ans);
}