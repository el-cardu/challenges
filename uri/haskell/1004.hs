main = do
    a <- getLine
    b <- getLine
    let n1 = (read a :: Int)
    let n2 = (read b :: Int)
    let prod = n1 * n2
    putStrLn ("PROD = " ++ show prod)