function salario(salario) {

    if (salario >= 0 && salario <= 400) {
        ajuste = salario * 0.15;
    } else if (salario >400 && salario <= 800) {
        ajuste = salario * 0.12;
    } else if (salario > 800 && salario <= 1200) {
        ajuste = salario * 0.10;
    } else if (salario > 1200 && salario <= 2000) {
        ajuste = salario * 0.07;
    } else {
        ajuste = salario *0.02;
    }
    console.log(`Novo salario: ${ajuste+salario}`)
    console.log(`Reajuste ganho: ${ajuste}`)

} 

salario(1000);