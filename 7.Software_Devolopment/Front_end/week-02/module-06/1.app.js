// alert("hello world")

// var h1=document.getElementsByTagName("h1");
// console.log(h1);

// var title=document.getElementsByClassName("title[0]");
// console.log(title);

// var check=(document.getElementById("check").style.color="red");
// console.log(check)

// // remove color
// document.getElementById("check").style.removeProperty("color");

var img=document.getElementById("img");
console.log(img.getAttribute("src"));

// set attribute
img.setAttribute("alt","picture");
console.log(img.getAttribute("alt"));

var hero=document.getElementById("hero");
console.log(hero.innerText);

var input=document.getElementById("input").value;
console.log(input);

var parent=document.getElementById("parent").innerHTML;
console.log(parent);
