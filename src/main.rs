fn main() {
    for _i in 1..101 {
        let mut out = String::from("");
        if _i % 3 == 0 {
            out.push_str("Fizz");
        }
        if _i % 5 == 0 {
            out.push_str("Buzz");
        }

        if out.len() == 0 {
            println!("{}", _i);
        }else{
            println!("{}", out);
        }
    }
}