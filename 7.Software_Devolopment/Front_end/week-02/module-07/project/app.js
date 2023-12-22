const loadData = () => {
    const searchText = document.getElementById("search-box").value;
    // console.log(searchText);
    fetch(`https://www.themealdb.com/api/json/v1/1/search.php?f=${searchText}`)
        .then((res) => res.json())
        .then((data) => displayData(data.meals))
        .catch((error) => console.log("Error fetching data:", error));
};


const displayData = (data) => {
    document.getElementById("total-meals").innerText = data.length;

    const mealsContainer = document.getElementById("meals-container");
    data.forEach((meal) => {
        console.log(meal);
        const card = document.createElement("div");
        card.classList.add("box");
        card.innerHTML = `
            <img class="box-img" src=${meal.strMealThumb} alt="not found">
            <h2>${meal?.strMeal}</h2>
            <p>${meal.strInstructions.slice(0, 50)}</p>
            <button
            onclick="displayModal('${meal.idMeal}')"
            type="button" class="btn btn-primary" data-bs-toggle="modal" data-bs-target="#exampleModal">
            Details
            </button>
            `
        mealsContainer.append(card);
    });
};

// const displayModal =async (id) => {
//    try{
//     const response=await fetch(`https://www.themealdb.com/api/json/v1/1/lookup.php?i=${id}`);
//     const data=await response.json();
//     console.log(data.meals[0]);
//    }
//    catch{
//     (err)=>{
//         console.log(err);
//     };
//    };
// };


// for show data in modal
const displayModal = async (id) => {
    try {
        const response = await fetch(`https://www.themealdb.com/api/json/v1/1/lookup.php?i=${id}`);
        const data = await response.json();

        const meal = data.meals[0];

        const modalTitle = document.querySelector('.modal-title');
        const mealDetails = document.getElementById('mealDetails');

        modalTitle.textContent = meal.strMeal;

        const content = `
            <img src="${meal.strMealThumb}" alt="${meal.strMeal}" class="img-fluid mb-2">
            <p><strong>Category:</strong> ${meal.strCategory}</p>
            <p><strong>Area:</strong> ${meal.strArea}</p>
            <p><strong>Instructions:</strong> ${meal.strInstructions}</p>
        `;

        mealDetails.innerHTML = content;

        const modal = new bootstrap.Modal(document.getElementById('exampleModal'));
        modal.show();

        // Clear modal content when the modal is closed
        const hiddenEventListener = function () {
            mealDetails.innerHTML = ''; // Clear the content
            modal._element.removeEventListener('hidden.bs.modal', hiddenEventListener); // Remove the listener
        };
        modal._element.addEventListener('hidden.bs.modal', hiddenEventListener, { once: true }); // Use { once: true } to run the event listener only once

    } catch (err) {
        console.log(err);
    }
};

