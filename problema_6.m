clc;
clear;
litros=input('ingresa la cantidad de litros que desea comprar:');
if litros<=(50)
    fprintf('el costo total es $150')
end
if litros>(50)
    cuota=150+(litros-50)*3
    fprintf('el total es')
end
if litros>(200)
    cuota=600+(litros-200)*5
    fprintf('costo total es: ')
end