x = 0
l =0

def valorenlaventa(totalapagat,cp,pp):
    totalapagat=totalapagat+(cp*pp)
    return totalapagat

def vuelto(valorenlaventax):
    pagar=int(input("Con cuanto pagara?: "))
    valorenlaventax=valorenlaventax-pagar
    return valorenlaventax

def cantiproductos(canti_prox,cp):
    canti_prox=canti_prox+cp
    return canti_prox
      
def venta(canti_prox):
    i="si"
    global x
    global l
    totalapagat=0
    valorenlaventax=0
    while(i!="no"):
        i=input("Quedan productos? ")
        if(i=="no"):
            i="no"  
        else:
            cp=int(input("Cantidad de producto: "))
            pp=int(input("Precio de producto: "))
            valorenlaventax=valorenlaventax+valorenlaventa(totalapagat,cp,pp)
            canti_prox=cantiproductos(canti_prox,cp)
            
    print("Total a pagar",valorenlaventax)
    print("Su vuelto es:",vuelto(valorenlaventax)*-1)
    x=x+canti_prox
    l=l+valorenlaventax
    
def turno(): 
    d="no"
    canti_prox=0
    a=0
    while(d!="si"):
        d=input("Ha terminado su turno? ")
        if(d=="si"):
            d="si"
        else:
            venta(canti_prox)
    print("La cantidad total de productos vendidos en el turno fue de:",x)
    print("La cantidad de dinero recaudada en el turno fue de:",l)

   
turno()
