/* Pre-requisite JS line */
document.addEventListener("DOMContentLoaded", function (event) {
  /* ⬇ Accordion Start ⬇ */

  const headingPanels = document.querySelectorAll(".heading_panel");

  headingPanels.forEach((panel) => {
    panel.addEventListener("click", function () {
      headingPanels.forEach((heading) => {
        const contentPanel = heading.nextElementSibling;
        if (heading !== this) {
          heading.classList.remove("active");
          contentPanel.style.maxHeight = null;
          contentPanel.classList.remove("active");
        }
      });

      this.classList.toggle("active");
      const contentPanel = this.nextElementSibling;
      contentPanel.style.maxHeight = contentPanel.style.maxHeight
        ? null
        : `${contentPanel.scrollHeight}px`;
      contentPanel.classList.toggle("active");
    });
  });

  /* ⬇ Disqus ⬇ */

  var disqus_config = function () {
    (this.page.url = "http://15.236.145.148/index.html"),
      "http://15.236.145.148/cycling.html",
      "http://15.236.145.148/muaythai.html",
      "http://15.236.145.148/tweets.html"; // Replace PAGE_URL with your page's canonical URL variable
    (this.page.identifier = "index"), "cycling", "muaythai", "tweets"; // Replace PAGE_IDENTIFIER with your page's unique identifier variable
  };

  (function () {
    // DON'T EDIT BELOW THIS LINE
    var d = document,
      s = d.createElement("script");
    s.src = "https://ostafford.disqus.com/embed.js";
    s.setAttribute("data-timestamp", +new Date());
    (d.head || d.body).appendChild(s);
  })();

  /* ⬇ Exercise ⬇ */

  let thumbnailElement = document.getElementById("smart_thumbnail");
  thumbnailElement.addEventListener("click", function () {
    if (thumbnailElement.className == "") {
      thumbnailElement.className = "small";
    } else {
      thumbnailElement.className = "";
    }
  });
});
