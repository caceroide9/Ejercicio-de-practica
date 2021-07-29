# Autor: Mathías Cáceres
# Fecha: 20/05/2015
from __future__ import division
op=0
n=3
while (n!=0):
    print "-------------------------------------------------------------"
    print "Seleccione el ejercicio que desee ejecutar"
    print "1- Trabajar con la regla de Cramer (2 incognitas)"
    print "2- Comprobar una fecha"
    print "3- Saber si un remedio esta vencido"
    op=input("Seleccione: ")
    print "-------------------------------------------------------------"
    if(op==1):
        print "Regla de Cramer (2 incognitas)"
        print "Siguiendo este formato:"
        print "ax + by = e"
        print "cx + dy = f"
        print "Defina a,b,c,d,e y f"
        a=input("Defina a: ")
        b=input("Defina b: ")
        e=input("Defina e: ")
        c=input("Defina c: ")
        d=input("Defina d: ")
        f=input("Defina f: ")
        print "Resolviendo:"
        aa=e*d-b*f
        ab=a*d-b*c
        if ab!=0:
            ac=aa*1.0/ab
            print "x vale:",ac
        else:
            print "x es indefinido"
        ba=a*f-e*c
        bb=a*d-b*c
        if bb!=0:
            bc=ba*1.0/bb
            print "y vale:",bc
        else:
            print "y es indefinido"
    if(op==2):
        print "Comprobar fecha"
        print "ddmmaaaa < La fecha debe cumplir ese formato (teniendo en cuenta que: d=dia - m=mes - a=año)"
        print "En caso de que el dia sea menor a 10, anteponga un 4 en vez de 0"
        x=input()
        if x>40000000 and x<=49129999:
            d=x//1000000-40
            m=(x//10000)-(d*100)-4000
            a=x-(d*1000000)-(m*10000)-40000000
        else:
            d=x//1000000
            m=(x//10000)-(d*100)
            a=x-(d*1000000)-(m*10000)
        if d>=1 and d<=31:
            if m>=1 and m<=12:
                if a>=0:
                    print "La fecha es valida"
                else:
                    print "La fecha no es valida"
            else:
                print "La fecha no es valida"
        else:
            print "La fecha no es valida"
    if(op==3):
        print "Vencimiento de un medicamento"
        print "Para el correcto funcionamiento del programa debe ingresar las fechas en formato ddmmaaaa"
        print "En caso de que el dia sea menor a 10, anteponga un 4 en vez de 0"
        e=input("Ingrese fecha de vencimiento del remedio: ")
        j=input("Ingrese fecha actual: ")
        if e>40000000 and e<=49129999:
            dm=e//1000000-40
            mm=(e//10000)-(dm*100)-4000
            am=e-(dm*1000000)-(mm*10000)-40000000
        else:
            dm=e//1000000
            mm=(e//10000)-(dm*100)
            am=e-(dm*1000000)-(mm*10000)
        if j>40000000 and j<=49129999:
            dn=j//1000000-40
            mn=(j//10000)-(dn*100)-4000
            an=j-(dn*1000000)-(mn*10000)-40000000
        else:
            dn=j//1000000
            mn=(j//10000)-(dn*100)
            an=j-(dn*1000000)-(mn*10000)

        if (dm>=1 and dm<=31) and (mm>=1 and mm<=12):
            if (dn>=1 and dn<=31) and (mn>=1 and mn<=12):
                if am>an:
                    print "El producto no esta vencido"
                else:
                    if am==an:
                        if mm>mn:
                            print "El producto no esta vencido"
                        else:
                            if mm==mn:
                                if dm>dn:
                                    print "El producto no esta vencido"
                                else:
                                    print "El producto esta vencido"
                            else:
                                print "El producto esta vencido"
                    else:
                        print "El producto se vencio"
            else:
                print "La fecha actual ingresada no es valida"
        else:
            print "La fecha de vencimiento ingresado no es valido"
    if(op<1) or (op>3):
            print "Ingrese un valor valido!"
    print "-------------------------------------------------------------"
    n=input("Ingrese cualquier numero para volver al menu (0 para salir): ")
print "Gracias por usar este programa"
