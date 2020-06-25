import Text.Printf

main = do
    a <- getLine
    b <- getLine
    let n1 = (read a :: Double)
    let n2 = (read b :: Double)
    let media = (3.5 * n1 + 7.5 * n2) / 11
    printf ("MEDIA = " ++ "%.5f\n") media