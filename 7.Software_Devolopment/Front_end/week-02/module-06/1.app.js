// alert("hello world")

// var h1=document.getElementsByTagName("h1");
// console.log(h1);

// var title=document.getElementsByClassName("title[0]");
// console.log(title);

// var check=(document.getElementById("check").style.color="red");
// console.log(check)

// // remove color
// document.getElementById("check").style.removeProperty("color");


// module 6.3
// var img=document.getElementById("img");
// console.log(img.getAttribute("src"));

// // set attribute
// img.setAttribute("alt","picture");
// console.log(img.getAttribute("alt"));

// var hero=document.getElementById("hero");
// console.log(hero.innerText);

// var input=document.getElementById("input").value;
// console.log(input);

// var parent=document.getElementById("parent").innerHTML;
// console.log(parent);


// module 6.4
var testDiv = document.getElementsByClassName("right");
console.log(testDiv[0].childNodes[1].parentNode.parentNode.parentNode.childNodes[5]);


// append
var newDiv = document.getElementById("newDiv");
var p = document.createElement("p");
p.innerText = "Succesfully i created that";
newDiv.append(p);

// do it by function
function append_maker() {
    var newDiv = document.getElementById("newDiv");
    var p = document.createElement("p");
    p.innerText = "Succesfully i created that by function";
    newDiv.append(p);
}
append_maker();
append_maker();
append_maker();
append_maker();

// module 6.5 create event,button
document.getElementById("submit-btn").addEventListener("click", function (e) {
    console.log("yes i created the button");
    append_maker();
});