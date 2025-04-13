# Holberton_level_2_website_creation

Holberton Level 2 Application - Make Your Own Website

# Agenda

- Create a website with HTML, CSS, and JavaScript.
- No frameworks or libraries allowed.
- Be creative with your design and idea.

# Website Ideas

- [ ] Personal Portfolio Website
- [ ] Traveling Review Website
- [x] Revisiting the last 10 years of my life
- [ ] Podcast Website
- [ ] Product Website

# Melbounre ERA Topics

- [ ] 2015
  - Moved to Melbourne from Perth
  - Transferred to Apple Highpoint as Genius
  - Rented for the first time
- [ ] 2016
  - Traveled to Bali with friends for the first time
  - First 200km ride on a track bike in Tatura
  - Attended my first road bike race
  - Soup Boys
- [ ] 2017
  - Raced my first road bike race
  - Felt I had a sense of community
  - Attended my first Soup Boys WNTRSLTC
  - Pondered the idea of learning code
- [ ] 2018
  - Raced my first track criterium
  - Traveled to Indonesia with family
  - Attended a family friends wedding back in Perth
  - Returned back to Muay Thai Coaching
- [ ] 2019
  - Raced my first National Track Championships
  - Quit Apple to work at EA as Senior Technical Support
  - Bought my first car
- [ ] 2020
  - COVID lockdown
  - Adopted Ruby (Female American Staffy cross Pitty)
- [ ] 2021
  - Pondered the idea of starting a podcast
  - COVID Lockdowns
  - Soup Athlectica
- [x] 2022
  - Having a sense of purpose (Muay Thai)
  - crowned EA go carting champion
  - Became a manager for the first time
- [x] 2023
  - Road Mt Buffalo on a track bike with no breaks
  - General Assembly Front-end web dev course
  - Git and Github bootcamp
- [x] 2024
  - lost a sense of direction
  - quit my job at EA and started a new job at a Square
  - Quit Square to pursue self study in full stack development with The Odin Project

# HTML Requirements

- [x] Paragraph <p>
- [x] Header <h1> - <h6>
- [x] Footer <footer>
- [x] strong <strong> or <b>
- [x] emphasized <em> or <i>
- [x] anchor ("link") <a>
- [x] href ("link") <a href="">
- [x] image <img>
- [x] src ("source/location") <img src="">
- [x] Unordered List <ul>
- [x] List Item <li>
- [x] blockquote <blockquote>
- [ ] Horizontal Rule <hr>
- [x] div <div>
- [x] main <main>
- [ ] aside <aside>
      Reference List
  - https://developer.mozilla.org/en-US/docs/Web/CSS/CSS_flexible_box_layout/Basic_concepts_of_flexbox
  - https://www.simplehtmlguide.com/cheatsheet.php

# CSS To-Do's

- [ ] Flexbox
- [ ] color
- [ ] font-weight
- [ ] Flexbox
- [ ] Flexbox
- [ ] Flexbox

      Reference list

  - https://css-tricks.com/wp-content/uploads/2022/02/css-flexbox-poster.png
  - https://www.w3schools.com/css/css3_gradients.asp
  - https://gradients.shecodes.io/
  - https://www.w3schools.com/howto/howto_js_accordion.asp
  - https://www.w3schools.com/w3css/w3css_accordions.asp
  - https://symbl.cc/en/
  - https://www.w3schools.com/cssref/sel_hover.php

# Extra Credit

- [ ] Accordion

# JS Notes

Notes (Concept understanding)

1. Create a variableName `let variableName =`
2. Select the element (`document.getElementById("name_of_ID")`);
3. Add an eventListener (`variableName.addEventListener("type");`)
   i. `type` = What is it that you're listening for (eg. click)
4. create the function (`function (){};`)
5. `if` statement.
   i. if variableName.property is equal to an empty string(""). If true (`==`) it means the variable has no property so execute the code
   ii. In plain English: "If the property is empty (i.e., the image is big), add the class "small" to shrink the image."
6. `else` statement
   i. this would indicate that the `if` statement would be false so execute the last bit of the function code.

## Accordion Concept

1. ```js
   const headingPanels = document.querySelectorAll(".heading_panel");
   ```

   #### Understandings:

   - This line selects all elements in the document that have the class `.heading_panel` and stores them in the `headingPanels` constant. `querySelectorAll` returns a NodeList (array-like structure), which allows us to iterate over the elements.

2. ```js
   headingPanels.forEach((panel) => {
   panel.addEventListener("click", function () {}};
   ```

   #### Understandings:

   - The `forEach` method is used to loop through each element (`panel`) in the `headingPanels` list. For each panel, an event listener is added, which listens for the "click" event.
   - `panel` is a parameter (placeholder) which is a temporary name given to each element inside the `headingPanels` list (array-like structure)

3. ```js
   headingPanels.forEach((heading) => {
     const contentPanel = heading.nextElementSibling;
     if (heading !== this) {
       heading.classList.remove("active");
       contentPanel.style.maxHeight = null;
       contentPanel.classList.remove("active");
     }
   });
   ```

   #### Understandings:

   - When a panel is clicked, this block first loops over all panels (`headingPanels`) again. For each panel (`heading`), it checks if the clicked panel (`this`) is the same as the current `heading`. If it's not, the `active` class is removed from both the `heading` and its corresponding `contentPanel`. Additionally, the `maxHeight` of the content panel is set to `null`, effectively collapsing it.
   - forEach Loop: For each heading (which represents each .heading_panel element), the function checks and controls the state of both the heading and its sibling .content_panel.

Sibling Element (nextElementSibling): The contentPanel is defined as the next sibling of the current heading in the HTML structure (which is the .content_panel in your case).

If Statement: The if statement checks whether the current heading is not the one that was clicked (this). If it's not the clicked heading, it will remove the active class from both the heading and contentPanel, and it will also set the contentPanel's height to null to collapse it.

Effect: This allows only the clicked panel to remain open, while all other panels collapse, following the accordion behavior.

4. ```js
   this.classList.toggle("active");
   const contentPanel = this.nextElementSibling;
   contentPanel.style.maxHeight = contentPanel.style.maxHeight
     ? null
     : `${contentPanel.scrollHeight}px`;
   contentPanel.classList.toggle("active");
   ```

   #### Understandings:

   -

Concept

- Select
- trigger/interact/listen
-

Reference

- https://www.w3schools.com/js/js_if_else.asp
