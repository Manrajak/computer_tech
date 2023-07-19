let ans = 0;
for(let i = 1;i<= 1000;i++){
    if(i%3 == 0){
        ans = ans + i;
    }
    else if(i%5 == 0){
        ans = ans + i;
    }
}
console.log(ans); 