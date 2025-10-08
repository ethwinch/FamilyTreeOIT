<h1>Family Tree Program</h1>
<p>As part of my Spring2025 Mentorship with Out in Tech, I created a Family Tree program in C++.
This program goes beyond what other programs allow you to do in terms of depicting a diverse range of relationships such as children of divorce, children of different parents, and polyamory.</p>

<p>The tree is visualized using the GraphViz library. The tree is generated as a dot file, which can be converted to an svg for easy use.</p>

<p>/!\<i>This project is still a work in progress, so there are some bugs and incomplete/missing features.</i></p>

<h1>Tree Example</h1>
<p>Below is an example of a family tree created using this program, which depicts some familiar characters and some made up ones. Let's walk through its basic functions.</p>

<h2>Key Features: Polyamory</h2>
<p>As you can see in the tree below, Peter, Wade and Mary Jane are all in a polyamorous relationship. This is depicted by them being grouped together in a light pink box. They don't all share the same children, however. Peter's children consist of Anne Parker and Rose Vera Garcia. Mary Jane does not have any children. Wade's children are Eliana P. Garcia and Rose Vera Garcia. Peter and Wade are both parents to Rose Vera Garcia, so they both get their own arrow pointing to Rose.</p>

<img width="525" height="535" alt="A family tree graph starting at FAMILY TREE and branching to May Parker who is in a relationship with Ben James Parker. Their children are Peter Ben Parker and Andrew Parker. Andrew Parker has one child named Elija P Parker. Peter Ben Parker is in a relationship with Mary Jane Parker and Wade W Wilson. Peter has children Anne Parker and Rose Vera Garcia. Mary Jane has no children. Wade has the children Eliana P Garcia and Rose Vera Garcia. Eliana P Garcia has a child Fabio Emett Parker. Fabio has child Layla Marie Parker, who is in a relationship with Alicia Darkin Parker." src="https://github.com/user-attachments/assets/d4aaf78d-5b5d-487a-931a-f5996b9e8dc9" />

<h2>Key Features: Children of Divorce/Different Parents</h2>

<p>Now, let's say Peter and Wade still shared Rose Vera Garcia as their child, but Peter and Wade were not together whether that be because they were never married or got divorced. In that case, the graph would look like this:</p>
<img width="596" height="607" alt="Same family tree as the previous one, however Wade W Wilson is no longer in a relationship with Peter Ben Parker and Mary Jane Parker." src="https://github.com/user-attachments/assets/435b90dc-c587-430d-91ab-5f3355179087" />

<p>You can see Peter and Wade still both have an arrow pointing to Rose to indicate that Rose is their child, but Wade is no longer included in that pink box that indicates a relationship.</p>

<p>If at any point a person's relationships are unclear based on the graph, you can hover over the person's name and a tooltip displaying their information will appear. This information includes full name, birth date, death date (or "ALIVE" if they are still living), gender, sex, a description, and their partners and children.</p>
<img width="625" height="632" alt="Same family tree as the first one, but with a tooltip coming from Peter Ben Parker's name displaying his informatioin." src="https://github.com/user-attachments/assets/754958a0-aeea-4630-b090-da56560d8175" />

<p>In Peter's tooltip we can see the following information:</p>
<b>
<p>Peter Ben Parker</p>
<p>Maiden Name: Parker</p>
<p>Birthdate: 6 / 10 / 2001</p>
<p>Deathdate: ALIVE</p>
<p>Gender: Man</p>
<p>Sex: Male</p>
<p>Children of Peter Ben Parker:</p>
<p>Rose</p>
<p>Anne</p>

<p>Partners of Peter Ben Parker:</p>
<p>Wade</p>
<p>Mary</p>

<p>Description: Is secretly Spider-Man.</p>
</b>
<br>

<p>Current gender options include X, MAN, WOMAN, NB, AGENDER, OTHER.</p>
<p>Current sex options include XX, MALE, FEMALE, INTERSEX.</p>

<p>These options will be expanded in the future.</p>

<h1>Running the Program in Visual Studio Code</h1>
<p>There is currently no GUI for this program (but I am working on it!), but if you still want to use this program in the meantime, this is how.</p>
<h2>Editing the Main File</h2>
<p>When creating a new family tree, you'll want to add the people and relationships to the file titled TEMPLATE_main.cpp. <i>This is the only file you have to edit.</i></p>
<p>There's instructions within the file which explains how to add a new person to the tree and how to add their partners and children as relationships.</p>
<h2>Running The Program</h2>
<p>Open all the files you need (TEMPLATE_main.cpp and Person.h) in an IDE such as MS Visual Studio Code.</p>
<p>Install the following two extensions:</p>
<ul>Graphviz (dot) language support for Visual Studio Code</ul>
<ul>Graphviz Interactive Preview</ul>
<p>Run the code from TEMPLATE_main.cpp. This should generate an output.dot file (you may have to manually search for it and open it in your IDE the first time you generate it). View the output.dot file and a black and white button with the word "DOT" should appear at the top right corner of the IDE. Click this to see the visualization of the tree using Graphviz.</p>
