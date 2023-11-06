fn main() {
    for i in 1..101 {
        let mut buffer = String::new();

        if i % 3 == 0 {
            buffer.push_str("Fizz");
        }
        if i % 5 == 0 {
            buffer.push_str("Buzz");
        }

        if buffer.is_empty() {
            println!("{}", i);
        } else {
            println!("{}", buffer);
        }
    }
}

