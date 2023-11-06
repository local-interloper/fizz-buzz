for (int i = 1; i <= 100; i++)
{
    var buffer = "";

    if (i % 3 == 0)
    {
        buffer += "Fizz";
    }

    if (i % 5 == 0)
    {
        buffer += "Bizz";
    }

    if (buffer.Length == 0)
    {
        Console.WriteLine(i);
        continue;
    }

    Console.WriteLine(buffer);
}
