##Programa para las notas

def notas(nombre,esp,best):
    global op
    x=float(input("Ingrese primer nota"))
    y=float(input("Ingrese segunda nota"))
    a=float(input("Ingrese tercera nota"))
    b=float(input("Ingrese cuarta nota"))
    if(esp=="I" or esp=="Info" or esp=="Informatica" or esp=="i"):
        if(((x+y+a+b)/4)>best):
            op=nombre
    print("El promedio de",nombre,"es de:",(x+y+a+b)/4)
               
def que_espe_a(esp,conta):
    if(esp=="A" or esp=="Admin" or esp=="Administracion" or esp=="a"):
        conta=conta+1
    return conta

def que_espe_i(esp,conti):
    if(esp=="I" or esp=="Info" or esp=="Informatica" or esp=="i"):
        conti=conti+1
    return conti

def que_espe_v(esp,contv):
    if(esp=="V" or esp=="Ventas" or esp=="ventas" or esp=="v"):
        contv=contv+1
    return contv
        
def ejercicio_2(x):
    j=1
    conta=0
    conti=0
    contv=0
    best=0.0
    while(j<=x):
        nombre=input("Nombre del alumno")
        esp=input("Que especilidad se encuentra A:Admin, I:Info, V:Ventas")
        conta=que_espe_a(esp,conta)
        conti=que_espe_i(esp,conti)
        contv=que_espe_v(esp,contv)
        notas(nombre,esp,best)
        j=j+1
    print("La cantidad de estudiantes en Administracion es",conta)
    print("La cantidad de estudiantes en Informatica es",conti)
    print("La cantidad de estudiantes en Ventas es",contv)
    print("Quien tiene mejores notas en Informatica es: ",op)

op=" "
x=int(input("Cantidad de estudiantes de la institucion?"))
ejercicio_2(x)#En caso de querer asigar un valor inferior a 300, descomentar la linea "roja" y en dejar así la función ejerci_1(x) 









