const container = document.querySelector(".container");

// array gloabal intializing 
let arr = [];


function sleep(ms){
	return new Promise(resolve => {
		setTimeout(resolve,ms);
	})
}

//function to generate bars 
function generateBars(size) {
    // intializing bars container as empty as new size is given 
    container.innerHTML = "";
    arr=[]; // clear arr after every new generate 
    for (let i = 0; i < size; i++) {
        const bar = document.createElement("div");     // creating new div for every bar 
        bar.classList.add("bar");                      // adding class to bar div
        let height = Math.floor(Math.random() * 250) + 20;// giving random heights to bar
        bar.style.height = height + "px";             
        arr.push(height);                                   //adding heights to array    
        container.appendChild(bar);//adding bar to conatiner 
    }
}

//function to bubble sort 

//NOTE - asyn fuunction by default return a promise 
async function  bubbleSort() {
	console.log(arr);
	// get all the bars so that we can update 
	const bars = document.querySelectorAll(".bar");//you'll get an array
    for (let i = 0; i < arr.length - 1; i++) {
        for (let j = 0; j < arr.length - i - 1; j++) {
              
		// change the color to highlight the two bars we are at !
		bars[j+1].style.background = "rgb(236, 135, 135)";

		// check the speed everytime as slider may chamge rather than calculating only once 
		const speedInput = document.querySelector("#speed");
            const speed = Number(speedInput.value);
		await sleep(1000-9.5*speed);

            if (arr[j] > arr[j + 1]) {
               let temp = arr[j];
                arr[j] = arr[j + 1];
   		    arr[j + 1] = temp;

		    bars[j].style.height = arr[j] + "px";
		    bars[j+1].style.height = arr[j+1] + "px";

		    await sleep(1000-9.5*speed);

 		}
		// reset the color 
		bars[j+1].style.background = "linear-gradient(to top,#2563eb,#38bdf8)";
        }
	  // just to show sorted bars colour them green 
	  bars[arr.length-1-i].style.background = "rgb(119, 166, 119)";
    }
    bars[0].style.background = "rgb(119, 166, 119)";
}
 

const sizeInput = document.querySelector("#size"); 
 const size = Number(sizeInput.value); 
const generateBtn = document.querySelector("#generate-btn"); //Generate Array btn
// when Generate Btn clciked we want bars to create with size we wrote 
generateBtn.addEventListener("click", async () => {
    const size = Number(sizeInput.value);
    generateBars(size);
    // accessing the bars 
  // const bars = document.querySelectorAll(".bar");
// this will give us nodelist means entire div in html rather only height value 
/*console.log(bars);*/
     await bubbleSort(); // bubble osrt is a asyn function 

});



