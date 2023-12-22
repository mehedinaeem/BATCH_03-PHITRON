// Function to display videos based on the selected category
const displayVideos = (videos) => {
    const videoContainer = document.getElementById("video-container");
    videoContainer.innerHTML = ""; // Clear previous content before appending new videos

    if (videos.length === 0) {
        // If there are no videos available for the category, display a message
        const card = document.createElement("div");
        card.classList.add("box");
        card.innerHTML = `
            <img class="box-img" src="https://static.vecteezy.com/system/resources/thumbnails/023/103/916/small_2x/not-available-rubber-stamp-seal-vector.jpg" alt="Logo Image">
            <h2>No videos available for this category</h2>
        `;
        videoContainer.appendChild(card);
    } else {
        // If videos are available, display them
        videos.forEach((video) => {
            const card = document.createElement("div");
            card.classList.add("box");

            // Verification icon conditionally added based on the 'verified' field
            const verificationIcon = video.authors[0].verified === true
                ? '<img class="verification-icon" src="./icon/verify icon.jpg" alt="Verified">'
                : '';

            card.innerHTML = `
                <img class="box-img" src=${video.thumbnail} alt="Thumbnail">
                <div class="video-details">
                    <div class="video-info">
                        <img class="profile-img" src=${video.authors[0].profile_picture} alt="authors">
                        <span class="video-title">${video.title}</span>
                    </div>
                    <div class="author">
                        <span class="author-info">
                            <p class="author-name">${video.authors[0].profile_name}</p>
                            <span class="verification">${verificationIcon}</span>
                        </span>
                        <p class="views">Views: ${video.others.views}</p>
                    </div>
                </div>
            `;
            videoContainer.appendChild(card);
        });
    }
};

// Function to load videos based on the selected category
const loadVideosByCategory = (categoryId) => {
    fetch(`https://openapi.programming-hero.com/api/videos/category/${categoryId}`)
        .then((res) => res.json())
        .then((data) => displayVideos(data.data)) // Call the displayVideos function with the fetched videos
        .catch((error) => console.log("Error fetching videos:", error));
};

// Function to sort videos by views in descending order
const sortVideosByViews = () => {
    fetch(`https://openapi.programming-hero.com/api/videos/category/1000`)
        .then((res) => res.json())
        .then((data) => {
            // Sort videos by views in descending order
            const sortedVideos = data.data.sort((a, b) => {
                const viewsA = parseInt(a.others.views.replace(/[^\d.]/g, ''), 10); // Extract numeric views
                const viewsB = parseInt(b.others.views.replace(/[^\d.]/g, ''), 10);
                return viewsB - viewsA;
            });
            displayVideos(sortedVideos); // Call the displayVideos function with the sorted videos
        })
        .catch((error) => console.log("Error fetching videos for sorting:", error));
};
