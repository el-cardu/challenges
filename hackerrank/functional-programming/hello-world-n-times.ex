defmodule Solution do
    def printManyTimes(n) do
        if n >= 1 do
            IO.puts 'Hello World'
            printManyTimes(n - 1)
        end
    end
    def getInteger() do
        input = IO.gets ""
        {integer, _} = Integer.parse input
        integer
    end
end

Solution.getInteger |> Solution.printManyTimes
