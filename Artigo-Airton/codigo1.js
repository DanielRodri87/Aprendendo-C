function collatzSequence(n) {
    console.log(n);
  
    while (n !== 1) {
      if (n % 2 === 0) {
        n = n / 2;
      } else {
        n = 3 * n + 1;
      }
      console.log(n);
    }
  }
  
  function main() {
    let n = 9999999;
  
    let start_time = process.hrtime();
    collatzSequence(n);
    let end_time = process.hrtime(start_time);
  
    let time_taken = end_time[0] + end_time[1] / 1e9;
  
    console.log("\n\nTempo necessário: " + time_taken.toFixed(3) + " segundos");
  }
  
  main();
  