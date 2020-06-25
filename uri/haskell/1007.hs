main = do
    a <- getLine
    b <- getLine
    c <- getLine
    d <- getLine
    let n1 = (read a :: Int)
    let n2 = (read b :: Int)
    let n3 = (read c :: Int)
    let n4 = (read d :: Int)
    let diferenca = (n1 * n2) - (n3 * n4)
    putStrLn ("DIFERENCA = " ++ show diferenca)