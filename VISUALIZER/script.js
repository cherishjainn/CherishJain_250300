const container = document.querySelector(".container");

// array gloabal intializing 
let arr = [];


function sleep(ms){
	return new Promise(resolve => {
		setTimeout(resolve,ms);//setTimeout(function will execute after ms time , time to wait);
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
	
    for (let i = 0; i < arr.length - 1; i++) {
        for (let j = 0; j < arr.length - i - 1; j++) {
		//after every iteration create bars as they swap and new order is created 
              let bars = container.children;//you'll get an array
		// change the color to highlight the two bars we are at !
            bars[j].style.background = "rgb(236, 135, 135)";
		bars[j+1].style.background = "rgb(236, 135, 135)";

		// check the speed everytime as slider may chamge rather than calculating only once 
		const speedInput = document.querySelector("#speed");
            const speed = Number(speedInput.value);

		await sleep(1000-9.5*speed);

            if (arr[j] > arr[j + 1]) {
               let temp = arr[j];
                arr[j] = arr[j + 1];
   		    arr[j + 1] = temp;
             
		 //get the bars 
		 let bar1 = bars[j];
		 let bar2 = bars[j+1];

		 //get the diff in position of these bars so that we can translate accordingly later 
		 //getBoundingClientRect()=> this gives position of element relative to overall worspace 
		 let distance = bar2.getBoundingClientRect().left - bar1.getBoundingClientRect().left;  
		 //as we want x axis translation take left distance only 

              //now translate both ,one right, one left, this much distance 


             // as speed controller will change we should change transform tim 
		bar1.style.transition = `transform ${1000-9.5*speed}ms ease`;
		bar2.style.transition = `transform ${1000-9.5*speed}ms ease`;


		  // transform is used to move elemnts 
		  bar1.style.transform = `translateX(${distance}px)`; // you cant write .translateX = "dist.." becasue transform is not a object its a porprty and translate is a function in it 
		  bar2.style.transform = `translateX(-${distance}px)` ;

		  //wait for tranform animation then change dom 
		  // jitni der animation chala utni der wait kr 
		  await sleep(1000-9.5*speed); 

		  //bars[j].style.height = arr[j] + "px";
		    //bars[j+1].style.height = arr[j+1] + "px";


              //VERY IMPORTANT
		  //ONLY USING TRANFORM WILL JUST VISULLY TRANLSLATE THE BARS, BUT IN DOM, INTERNALLY BARS ARE IN SAME POSITION
		  //so we have to change their position in dom as well 
		// for that insertbefore(node to inser , before this node) property is used 
		  container.insertBefore(bar2,bar1)	;//change dom order of bars 
             container.offsetHeight;
		    
		 // ideal way is that if they are swapped in dom make reset their transform 

		 //in javascipt we dont just see the order of code written 
		 //since we included transition and tranform in css of bar1 and bar2
		 //  if there any change in their position their getBoundingClient will change and tranform will again start internally therefore necesaary to empty it 
 		  bar1.style.transition = "";
              bar2.style.transition = "";
			
		 bar1.style.transform = "";
            bar2.style.transform = "";
              //transform: translateX(50px);
//means:"I want this element to always be shifted 50px to the right."
//That's not what you want after the swap. You only wanted that shift during the animation.
 		}
		// reset the color 
		bars[j+1].style.background = "linear-gradient(to top,#2563eb,#38bdf8)";
		bars[j].style.background = "linear-gradient(to top,#2563eb,#38bdf8)";

		await sleep(40);
        }
	  // just to show sorted bars colour them green 
	 let bars = container.children; 
	  bars[arr.length-1-i].style.background = "rgb(119, 166, 119)";
    }
let bars = container.children; 
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



