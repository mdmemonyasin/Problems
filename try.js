let num = [];
for(let i = 1;)

for(let i = 0; i < num.length; i ++) {
    let isPrimeNumber = 'yes'
  
  for(let j = 1; j < i; j ++) {
      if(num[i] % num[j] === 0) {
            isPrimeNumber = 'no'
          break
      }

  } 

    if(isPrimeNumber === 'yes') {
      console.log(num[i])
  }

}