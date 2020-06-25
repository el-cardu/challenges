main = do
    a <- getLine
    let n1 = (read a :: Int)
    b <- getLine
    let n2 = (read b :: Int)
    let soma = n1 + n2
    putStrLn ("SOMA = " ++ show soma)