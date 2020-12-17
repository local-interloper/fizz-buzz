for i=1, 10, 1 do
    local out = ""
    if(i % 3 == 0) then
        out = out .. "Fizz"
    end
    if(i % 5 == 0) then
        out = out .. "Buzz"
    end
    if(out == "") then
        io.write(tostring(i).."\n")
    else
        io.write(out.."\n")
    end
end