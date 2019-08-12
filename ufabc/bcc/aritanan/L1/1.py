def segundo_menor_e_maior(lista):
    lista = list(sorted(lista))
    _, segundo_menor, *_, segundo_maior, _ = lista
    return segundo_menor, segundo_maior

if __name__ == '__main__':
    assert segundo_menor_e_maior([1,2,3,4,5]) == (2, 4)
