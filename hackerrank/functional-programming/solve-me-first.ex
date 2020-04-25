defmodule Solution do
    
    def getInteger() do
        input = IO.gets ""
        {integer, _} = Integer.parse input
        integer
    end

    def println(str) do
        IO.puts str
    end

    def sum(a, b) do
        a + b
    end


end

first = Solution.getInteger
second = Solution.getInteger
Solution.sum(first, second) |> Solution.println