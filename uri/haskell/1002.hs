import Text.Printf

main = do
    r <- getLine
    let raio = (read r :: Double)
    let pi = 3.14159
    let area = pi * raio * raio
    printf ("A=" ++ "%.4f\n") area