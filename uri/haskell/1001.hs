main = do
    a <- getLine
    b <- getLine
    let x = (read a :: Int)
    let y = (read b :: Int)
    let sum = x + y
    putStrLn ("X = " ++ show sum)  