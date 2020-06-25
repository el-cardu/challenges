import Text.Printf

main = do
    a <- getLine
    b <- getLine
    c <- getLine
    let n1 = (read a :: Double)
    let n2 = (read b :: Double)
    let n3 = (read c :: Double)
    let media = (2.0 * n1 + 3.0 * n2 + 5.0 * n3) / 10.0
    printf "MEDIA = %.1f\n" media