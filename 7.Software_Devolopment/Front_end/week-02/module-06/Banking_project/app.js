alert("hey");
function handle_deposit(){
    var input_value=document.getElementById("Deposit_input").value;
    // console.log(input_value);
    var converted_input_value=convert_to_number(input_value);
    var deposite_amount=document.getElementById("deposit-amount").innerText;
    var converted_deposit_amount=convert_to_number(deposite_amount);

    var sum=converted_input_value+converted_deposit_amount;
    document.getElementById("deposit-amount").innerText=sum;
    document.getElementById("Deposit_input").value="";
}

function convert_to_number(value){
    return parseFloat(value);
}