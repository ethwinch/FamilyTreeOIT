As part of my Spring2025 Mentorship with Out in Tech, I created a Family Tree program in C++.
This program goes beyond what other programs allow you to do in terms of depicting a diverse range of relationships such as children of divorce, children of different parents, and polyamory.

The tree is visualized using the GraphViz library. 

Below is an example of a family tree created using this program, which depicts some familiar characters and some made up ones.
<img width="525" height="535" alt="A family tree graph starting at FAMILY TREE and branching to May Parker who is in a relationship with Ben James Parker. Their children are Peter Ben Parker and Andrew Parker. Andrew Parker has one child named Elija P Parker. Peter Ben Parker is in a relationship with Mary Jane Parker and Wade W Wilson. Peter has children Anne Parker and Rose Vera Garcia. Mary Jane has no children. Wade has the children Eliana P Garcia and Rose Vera Garcia. Eliana P Garcia has a child Fabio Emett Parker. Fabio has child Layla Marie Parker, who is in a relationship with Alicia Darkin Parker." src="https://github.com/user-attachments/assets/d4aaf78d-5b5d-487a-931a-f5996b9e8dc9" />

As you can see, Peter, Wade and Mary Jane are all in a polyamorous relationship. This is depicted by them being grouped together in a light pink box. They don't all share the same children, however. Peter's children consist of Anne Parker and Rose Vera Garcia. Mary Jane does not have any children. Wade's children are Eliana P. Garcia and Rose Vera Garcia. Peter and Wade are both parents to Rose Vera Garcia, so they both get an arrow pointing to Rose.

Now, let's say Peter and Wade still shared Rose Vera Garcia as their child, but Peter and Wade were not together whether that be because they were never married or got divorced. In that case, the graph would look like this:
<img width="596" height="607" alt="Same family tree as the previous one, however Wade W Wilson is no longer in a relationship with Peter Ben Parker and Mary Jane Parker." src="https://github.com/user-attachments/assets/435b90dc-c587-430d-91ab-5f3355179087" />

You can see Peter and Wade still both have an arrow pointing to Rose to indicate they are their child, but Wade is no longer included in that pink box that indicates a relationship. 

If at any point a person's relationships are unclear based on the graph, you can hover over the person's name and a tooltip displaying their information will appear. This information includes full name, birth date, death date (or "ALIVE" if they are still living), gender, sex, an optional description about them, and their partners and children.
<img width="625" height="632" alt="Same family tree as the first one, but with a tooltip coming from Peter Ben Parker's name displaying his informatioin." src="https://github.com/user-attachments/assets/754958a0-aeea-4630-b090-da56560d8175" />

In Peter's tooltip we can see the following information:
  Peter Ben Parker
  Maiden Name: Parker
  Birthdate: 6 / 10 / 2001
  Deathdate: ALIVE
  Gender: Man
  Sex: Male
  Children of Peter Ben Parker:
  Rose
  Anne

  Partners of Peter Ben Parker:
  Wade
  Mary

  Description: Is secretly Spider-Man.

Current gender options include X, MAN, WOMAN, NB, AGENDER, OTHER.
Current sex options include XX, MALE, FEMALE, INTERSEX.

These options will be expanded in the future.
