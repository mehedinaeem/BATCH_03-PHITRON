// alert("hi");
// fetch("https://fakestoreapi.com/products")
// .then(res=>res.json())
// .then((data)=>{
//     console.log(data);
// })
// .catch((arr)=>{
//     console.log(arr);
// });

// console.log("1");
// console.log("2");
// console.log("3");
// console.log("4");
// show(5);
// console.log("6");
// console.log("7");
// console.log("8");
// console.log("9");

// function show(value) {
//     // console.log(value);
//     fetch("https://fakestoreapi.com/products")
//         .then(res => res.json())
//         .then((data) => {
//             console.log(data);
//         })
// }

// const getData=new Promise((resolve, reject) => {
//     return resolve(20);
// });
// getData.then(data=>console.log(data));


// const getData=new Promise((resolve, reject) => {
//     return reject(20);
// });
// console.log(getData);



// asycronus
const loadData=async()=>{
    const responce=await fetch("https://fakestoreapi.com/products");
    const data=await responce.json();
    console.log(data);
}

loadData();