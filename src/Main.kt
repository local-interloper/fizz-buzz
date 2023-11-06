fun main() {
    for (n in 1..100) {
        var buffer = "";

        if (n % 3 == 0) {
            buffer += "Fizz";
        }

        if (n % 5 == 0) {
            buffer += "Buzz";
        }

        if (buffer.isEmpty()) {
            println(n);
            continue;
        }

        println(buffer)
    }
}
