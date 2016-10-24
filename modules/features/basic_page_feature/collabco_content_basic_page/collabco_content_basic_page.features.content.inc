<?php
/**
 * @file
 * collabco_content_basic_page.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function collabco_content_basic_page_content_defaults() {
  $content = array();

  $content['about'] = (object) array(
    'exported_path' => 'about',
    'title' => 'About',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'basic_page',
    'language' => 'en',
    'created' => 1468284206,
    'comment' => 1,
    'translate' => 0,
    'machine_name' => 'about',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>The Ideas Management System (IMS) is a virtual, interactive, collaboration tool that allows people to share and manage ideas across the organisation – online or from a mobile phone or tablet. The IMS supports the organisation’s strategic direction of delivery and forward looking.</p>

<p>With user centred design, new technologies and innovative ways of working, collaboration is more important than ever! We want to maintain our strengths as an organisation, while leveraging opportunities to improve on the value we provide.</p>

<p>The IMS will help us do this.</p>

<h3>The site</h3>

The key functions of the IMS are the "Challenges" and "Collaboration" spaces. A Challenge is set as a call to action to solve a problem. Ideas are then created by people to meet the Challenge’s needs.

A Collaboration is where successful ideas enter the ‘develop’ cycle of the organisation’s innovation process for further development and possible implementation.

<h3>Features</h3>

<ul>
<li><strong>Share, support and collaborate with others in the organisation</strong>
Share your knowledge, support and follow others, and work together on Challenges or Brainstorms. Extend the conversation by sharing ideas with colleagues.
Tap into knowledge across the organisation
</li>
<li>Visit My Hub or explore to stay on top of what matters to you. Find and build on the ideas of others to help refine and develop them, and solve our big Challenges in the organisation.
Connect and engage.</li>

<li>Participate in an open, collaborative space with people and groups across the Department. This is a central place for ideas, brainstorming, collaboration and more. Involve yourself while you’re in the office or on the go on a mobile phone or tablet.
Idea collaboration</li>

<li>Collaborate and work with others from across the organisation on projects, initiatives, and events. Get involved to see if an idea has the right potential to become a project, or follow an idea as it is developed.
</li>
</ul>',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => '<p>The Ideas Management System (IMS) is a virtual, interactive, collaboration tool that allows people to share and manage ideas across the organisation – online or from a mobile phone or tablet. The IMS supports the organisation’s strategic direction of delivery and forward looking.</p>

<p>With user centred design, new technologies and innovative ways of working, collaboration is more important than ever! We want to maintain our strengths as an organisation, while leveraging opportunities to improve on the value we provide.</p>

<p>The IMS will help us do this.</p>

<h3>The site</h3>

The key functions of the IMS are the "Challenges" and "Collaboration" spaces. A Challenge is set as a call to action to solve a problem. Ideas are then created by people to meet the Challenge’s needs.

A Collaboration is where successful ideas enter the ‘develop’ cycle of the organisation’s innovation process for further development and possible implementation.

<h3>Features</h3>

<ul>
<li><strong>Share, support and collaborate with others in the organisation</strong>
Share your knowledge, support and follow others, and work together on Challenges or Brainstorms. Extend the conversation by sharing ideas with colleagues.
Tap into knowledge across the organisation
</li>
<li>Visit My Hub or explore to stay on top of what matters to you. Find and build on the ideas of others to help refine and develop them, and solve our big Challenges in the organisation.
Connect and engage.</li>

<li>Participate in an open, collaborative space with people and groups across the Department. This is a central place for ideas, brainstorming, collaboration and more. Involve yourself while you’re in the office or on the go on a mobile phone or tablet.
Idea collaboration</li>

<li>Collaborate and work with others from across the organisation on projects, initiatives, and events. Get involved to see if an idea has the right potential to become a project, or follow an idea as it is developed.
</li>
</ul>',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['help'] = (object) array(
    'exported_path' => 'help',
    'title' => 'Help',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'basic_page',
    'language' => 'en',
    'created' => 1468284217,
    'comment' => 1,
    'translate' => 0,
    'machine_name' => 'help',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<h3>Account &amp; Profile</h3>

<h4>Managing&nbsp;your profile</h4>

<p><strong>How do I change my personal details?</strong></p>

<p>You can change your details on your profile page. Here you can upload a biography, photo, job title and your key skills.</p>

<p><strong>Who can see my profile?</strong></p>

<p>Anyone who has access to an active Department of Employment IMS account can view your profile. It can help other users match you to Challenges or ideas you may have expertise or interest in.</p>

<p>&nbsp;</p>

<h4>Innovation Achievements</h4>

<p><strong>What is an Innovation Achievement?</strong></p>

<p>An Innovation Achievement is awarded to those who submit or lead ideas that are converted to a collaboration, or chosen to become a project.</p>

<p><strong>Who can see my achievements?</strong></p>

<p>Anyone who views your profile will be able to see your achievements.</p>

<p>&nbsp;</p>

<h4>My Hub</h4>

<p><strong>What is My Hub?</strong></p>

<p>My Hub is a central repository for all ideas and collaborations that you create or follow. Here you can view the latest activity for the material that you’re interested in. This is your hub, tailor it to suit the way you work.</p>

<p>&nbsp;</p>

<h4>Notifications</h4>

<p><strong>Will I receive notifications?&nbsp;</strong></p>

<p>Yes. You will receive notifications when changes occur relating to the content in your hub. Whether an idea you are supporting or following progresses to the collaboration space, becomes a project, or undergoes any significant change. Notification symbols will appear on the site. You can also elect to receive email notifications.</p>

<p><strong>Can I turn notifications off?</strong></p>

<p>Yes. Notifications can be turned off in the settings on your profile page.</p>

<p>&nbsp;</p>

<h3>How it works</h3>

<p><strong>What is an Ideas Management System (IMS)? </strong></p>

<p>An IMS is a virtual, interactive, collaboration tool that allows staff to share and manage ideas across the Department— online or from a mobile phone or tablet. The IMS supports the Department’s strategic direction of delivery and forward looking. &nbsp;</p>

<p><strong>What do ‘ideas’ mean? </strong></p>

<p>Good things start with an idea. Though often, some ideas remain untapped. This site is your platform to get your idea out there and see what comes of it.</p>

<p><strong>What does ‘Co-Labs’ mean?</strong></p>

<p>Collaborations are ideas that have gained support and have potential to enter the Develop phase of the Innovation Process. Collaborations involve the input of the idea creator, and any other users who support the idea and would like to see it develop.</p>

<p><strong>Why would I use the IMS?</strong></p>

<p>The IMS is not just a fancy suggestion box. It’s a way for staff to take responsibility for their ideas and the strategic goals of the Department. Individuals or teams across our offices in Australia can submit new ideas they think have the potential to improve our agency and better achieve its objectives. Challenges are open to ideas about any of our work. You can comment on your colleagues ideas and ‘support’ the ones you like and have interest in.</p>

<p><strong>What can the IMS do for me? </strong></p>

<p>The IMS allows you to share your ideas and collaborate with staff from across the Department with the aim of unlocking invaluable information and insights, and finding solutions for better ways for our Department to deliver its work. An IMS also enables you to explore, support, follow, or share ideas and innovation in the Department without actively participating in Challenges.</p>

<p><strong>How does the IMS assist the innovation process? </strong></p>

<p>Ideas are a key element in the innovation process, but without a mechanism for managing them, it can be difficult to prioritise innovative efforts and channel innovation activity into the areas it is needed most. The following identifies how the IMS can assist at each stage of the innovation process:</p>

<ul>
	<li><strong>Challenge</strong>: Challenges are set and tap into the knowledge of Department staff to solve specific problems. They are sponsored and endorsed by Executive and are time-specific.</li>
	<li><strong>Generate</strong> (finding, adapting or creating ideas): The IMS encourages staff to put forward ideas &nbsp;to a Challenge or placed them in the Brainstorm space.</li>
	<li><strong>Select</strong> (choosing which ideas to use): Ideas are judged by the relevant Challenge sponsor (usually a member of the Department’s Executive team) and progressed for further collaboration. Not all ideas will be progressed to the Co-Lab. However, each will be considered in the development of a solution. In the collaboration space, the IMS can help to refine and iterate ideas by allowing others to share their perspectives, expertise and input.</li>
	<li><strong>Decide</strong>: After user testing, refinement and rapid prototyping, it is decided whether the idea will become a project or implemented.</li>
	<li><strong>Implement</strong> (putting the ideas into practice): The IMS assists in implementation if it records the lessons learnt, identifies options that have and have not worked, and determines what made the implementation successful.</li>
</ul>

<p><strong>When would I use the IMS? </strong></p>

<ul>
	<li>Whenever you have a lightbulb moment or are feeling inspired.</li>
	<li>When you want to read about what current challenges we have in the Department or what are the trending ideas in the Department.</li>
	<li>When you have an idea but it needs some work or further development from someone with expertise in the area.</li>
	<li>When you want to see and support other ideas.</li>
	<li>When you think you have a solution to a challenge set by the Executive team.</li>
	<li>When you want to collaborate with others in the Department and build on ideas.</li>
</ul>

<p><strong>Is there a how-to guide for IMS?</strong></p>

<p>Yes. A how-to guide is available on the Department’s IMS intranet page.</p>

<p><strong>How is this any different to other platforms I’m using?</strong></p>

<p>The IMS is different. It is not a social media forum or a SharePoint site. &nbsp;The IMS has been designed to specifically focus on innovation and seeing how ideas move through the stages of assessment before becoming a project. This collaborative, supportive space provides visibility of our ideas and what happens to them. Promising ideas will be progressed as a possible solution and &nbsp;those chosen will have Executive sponsorship and be given time to develop.</p>

<p><strong>Is the IMS accessible? </strong></p>

<p>Yes. The IMS has been designed and developed using the Web Content Accessibility Guidelines and the Department’s Visual Identity Style Guide.</p>

<p>&nbsp;</p>

<h3>Ideas</h3>

<p><strong>Is it mandatory to submit an idea?</strong></p>

<p>No. You can decide how involved you are. You may simply like to support or follow some ideas, or comment or provide input.</p>

<p><strong>What sort of ideas can I share?</strong></p>

<p>Your initial ideas can be about what we deliver or how we deliver it. Ideas could range from a proposal on how to do briefings more efficiently, how to tackle a specific policy or program, how to reduce internal red tape or a new IT device or application.</p>

<p>Thought should be given to impact, effectiveness, productivity gains and cost-efficiency.</p>

<p>Ideas that address a specific Challenge must include the above criterion and be specific to the Challenge.</p>

<p>An idea will be transformative if it is not only new or different, but influences and challenges the way we &nbsp;think and work in the long term.</p>

<p>Ideas should also aim to improve on what we currently do, perhaps by increasing efficiency.</p>

<p>Ideas should be submitted to make our agency better. Frame it in a way that ensures it’s clear and not a complaint. For example, a statement to ‘fix the intranet’ is not an idea, however, the idea could be ‘what if we were able to somehow link the organisational chart and the corporate directory?’</p>

<p><strong>How long should ideas be?</strong></p>

<p>An idea title should be brief, perhaps two to five words. The detailed idea should be no longer than 250 words, and can be supported with attachments.</p>

<p><strong>Who is accountable for my idea?</strong></p>

<p>You are responsible for ideas you put forward.</p>

<p><strong>How much effort will it involve if I post an idea?</strong></p>

<p>Your level of activity is completely up to you. Once you’ve submitted your idea, you have no obligations. You will be contacted if your idea wins a Challenge, and you will have the option to work in the Collaboration team to develop the idea further.</p>

<p><strong>Who will see my ideas?</strong></p>

<p>Anyone with active Department of Employment IMS account can view, support, share and comment on your idea. Challenges have a sponsor, who will follow the progress of the challenge and choose the winning idea(s).</p>

<p><strong>Can I remain anonymous when submitting an idea?</strong></p>

<p>No, you cannot remain anonymous. The IMS encourages a transparent, collaborative environment.</p>

<p><strong>What if someone is inappropriate to me or my idea?</strong></p>

<p>All staff must adhere to the APS Code of Conduct when participating on the IMS. Any inappropriate behaviour will not be tolerated. A ‘Report inappropriate use’ button is also available to use if you see something that does not adhere to the Code of Conduct.</p>

<p><strong>Will there be training available?</strong></p>

<p>There are currently no set training courses available. However, team members from either the Business Improvement or Innovation Partnerships team are available to walk you through should you require it.</p>

<p><strong>How can I make my idea a success?</strong></p>

<p>An idea will be considered a success where it has resulted in improved practice, cost-efficiency or it has generated new information which informs&nbsp; future or related improvement. This does not guarantee an idea will be implemented.</p>

<p><strong>Who will judge my idea?</strong></p>

<p>Challenge Sponsors and the Senior Executive will judge each idea submitted to a Challenge. the Innovations Partnerships team will designate ideas to either the Senior Executive or the appropriate business area for judging and progression.</p>

<p><strong>What is the criterion for judging?</strong></p>

<p>When judging ideas, the following will be asked:</p>

<ul>
	<li>Will it solve our Challenge?</li>
	<li>What will the idea achieve?</li>
	<li>How will it transform what we do?</li>
	<li>What lessons can be learnt from testing the idea?</li>
	<li>What will the early signals of success and failure be?</li>
	<li>What is the potential impact if the idea fails?</li>
	<li>What existing structures and processes need to change in order to implement the idea?</li>
	<li>Does success have dependencies outside of the Department?</li>
</ul>

<p><strong>How long will an idea be published on the IMS for?</strong></p>

<p>Ideas will remain on the IMS for the duration of the Challenge. Ideas that do not progress to the collaboration stage, or have no activity for three months will be ‘Parked’ and can be retrieved at a later time if the idea can support a new Challenge.</p>

<p><strong>Will I receive anything if my idea wins?</strong></p>

<p>If your idea is selected to progress to the Collaboration stage you will be invited to be part of its development. You will receive a badge on your IMS profile at each stage your idea passes through towards Implementation. We want to celebrate and share these successes through internal communication channels.</p>

<p><strong>Will my idea be acknowledged?</strong></p>

<p>All ideas will be acknowledged via email when it is created unless notified otherwise, and whenever activity occurs in relation to your idea. You will also be notified if your idea has progressed to collaboration stage.</p>

<p>Regardless of how good an idea may be, the time might not be right to implement it.</p>

<p><strong>Will I be able to see what happens to my idea?</strong></p>

<p>Yes. Badges will appear on your collaboration page as your idea moves through the innovation process, so you will be able to see what stage your idea is in.</p>

<p><strong>What happens when I support an idea?</strong></p>

<p><strong>‘</strong>Supporting’ an idea will notify the creator that you support or ‘like’ their idea. It does not require you to be an active participant or provide input.</p>

<p><strong>What happens when I follow an idea?</strong></p>

<p>‘Following’ an idea will provide you with notifications when the idea progresses and each step of the journey. Content you follow will appear in your ‘My Hub’.</p>

<p><strong>What happens when I share an idea?</strong></p>

<p>If you think a colleague would like the idea or collaboration, you are able to ‘share’ this via email. This is a great way to increase engagement with your ideas, or ideas you support.</p>

<p><strong>What’s the difference between collaborating and commenting on an idea?</strong></p>

<p>You are able to comment on any idea throughout the site regardless of whether it is a collaboration. Collaborating is specific to ‘winning’ ideas selected for development in the innovation process. A collaboration team will take an idea through a cycle of rapid prototyping, iterating and refining, and user testing to determine whether an idea has potential to be a successful project and help solve the original Challenge. Collaboration involves further development of an idea, not just support of it.</p>

<p><strong>How will winning ideas be implemented?</strong></p>

<p>It will be the responsibility of the project team to continue the project under the sponsor’s direction. The Innovation Partnerships team is able to provide guidance and support.</p>

<p>&nbsp;</p>

<h3>Challenges</h3>

<p><strong>What is a Challenge?</strong></p>

<p>A Challenge is a problem that needs solving. It is a call to action addressing the big issues of the Department, sponsored by Executive and time limited.</p>

<p><strong>Can anyone set a Challenge? </strong></p>

<p>No, challenges can only be set by Executive or approved business areas.</p>

<p><strong>How can my business area set a Challenge?</strong></p>

<p>To set a Challenge on the site, contact the Innovations Partnerships team with an outline of the Challenge you wish to set.</p>

<p><strong>How do I know if my idea for a Challenge is successful? Is it from the number of supporters?</strong></p>

<p>If your idea is selected and wins a Challenge, you will be notified via email. The sponsor and Senior Executive will determine the successful idea. It will not be determined by the number of supporters. However, the number of supports will play a role in highlighting popular ideas.</p>

<p><strong>Can there be more than one successful idea? </strong></p>

<p>Yes, there can be more than one successful idea. Successful ideas will enter the Collaborate space to determine the viability for implementation.</p>

<p><strong>What happens if there is no activity on an idea?</strong></p>

<p>Ideas that do not progress to collaboration stage or have no activity for three months will be ‘Parked’ and can be retrieved at a later time if the idea can support a new Challenge.</p>

<p>&nbsp;</p>

<h3>Building on ideas</h3>

<p><strong>Why is building on ideas so important?</strong></p>

<p>Constructive feedback&nbsp;allows staff to refine their thinking, challenge themselves and be challenged. By working with others in different areas of the Department, knowledge and skills can be shared in order to make a project more successful than it might otherwise be. This naturally inspires a sense of community and allows staff to learn from each other.</p>

<p>&nbsp;</p>

<h3>Definitions</h3>

<p><strong>Iteration</strong></p>

<p>Iteration is when other staff suggest improvements to ideas or point out concerns or potential issues with its implementation. Alternatively, responses to ideas can be incorporated and the proposal adjusted to address those concerns. Such discussion can allow for ideas to be built upon and improved.</p>

<p><strong>Prototyping </strong></p>

<p>Prototyping in the IMS context means developing something quickly and cheaply that can be tested with users to gain feedback on what’s working and what isn’t.</p>

<p><strong>Idea</strong></p>

<p>An Idea is any document, material, content, text, diagram or illustration submitted to a Challenge or Brainstorm to solve one of the organisation’s big issues.</p>

<p><strong>Challenge </strong></p>

<p>A Challenge is a specific problem that needs solving, sponsored by Executive and time specific.</p>

<p><strong>Implementation </strong></p>

<p>Implementation is the confirmation by the Organisation that it will implement an idea as a project. This will occur outside of the IMS site.</p>

<p><strong>Innovation</strong></p>

<p>Innovation refers to new ideas, approaches, business models, policy practices or technologies that are more effective than existing approaches.By more effective, innovation should deliver results at a lower cost, have broader impact or reach, or increase the quality or timeliness of organisations outcomes. For us, innovation means putting ideas into practice to add value for our people, stakeholders and clients.</p>

<p>&nbsp;</p>

<h3>Still don’t have the answer?</h3>

<p>Please contact the <a href="http://mailto:contact@collabforge.com">collabforge</a>&nbsp;team</p>
',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => '<h3>Account &amp; Profile</h3>
<h4>Managing&nbsp;your profile</h4>
<p><strong>How do I change my personal details?</strong></p>
<p>You can change your details on your profile page. Here you can upload a biography, photo, job title and your key skills.</p>
<p><strong>Who can see my profile?</strong></p>
<p>Anyone who has access to an active Collabco IMS account can view your profile. It can help other users match you to Challenges or ideas you may have expertise or interest in.</p>
<p>&nbsp;</p>
<h4>Innovation Achievements</h4>
<p><strong>What is an Innovation Achievement?</strong></p>
<p>An Innovation Achievement is awarded to those who submit or lead ideas that are converted to a collaboration, or chosen to become a project.</p>
<p><strong>Who can see my achievements?</strong></p>
<p>Anyone who views your profile will be able to see your achievements.</p>
<p>&nbsp;</p>
<h4>My Hub</h4>
<p><strong>What is My Hub?</strong></p>
<p>My Hub is a central repository for all ideas and collaborations that you create or follow. Here you can view the latest activity for the material that you’re interested in. This is your hub, tailor it to suit the way you work.</p>
<p>&nbsp;</p>
<h4>Notifications</h4>
<p><strong>Will I receive notifications?&nbsp;</strong></p>
<p>Yes. You will receive notifications when changes occur relating to the content in your hub. Whether an idea you are supporting or following progresses to the collaboration space, becomes a project, or undergoes any significant change. Notification symbols will appear on the site. You can also elect to receive email notifications.</p>
<p><strong>Can I turn notifications off?</strong></p>
<p>Yes. Notifications can be turned off in the settings on your profile page.</p>
<p>&nbsp;</p>
<h3>How it works</h3>
<p><strong>What is an Ideas Management System (IMS)? </strong></p>
<p>An IMS is a virtual, interactive, collaboration tool that allows staff to share and manage ideas across the Organisations— online or from a mobile phone or tablet. The IMS supports the Organisations strategic direction of delivery and forward looking. &nbsp;</p>
<p><strong>What do ‘ideas’ mean? </strong></p>
<p>Good things start with an idea. Though often, some ideas remain untapped. This site is your platform to get your idea out there and see what comes of it.</p>
<p><strong>What does ‘Co-Labs’ mean?</strong></p>
<p>Collaborations are ideas that have gained support and have potential to enter the Develop phase of the Innovation Process. Collaborations involve the input of the idea creator, and any other users who support the idea and would like to see it develop.</p>
<p><strong>Why would I use the IMS?</strong></p>
<p>The IMS is not just a fancy suggestion box. It’s a way for staff to take responsibility for their ideas and the strategic goals of the Organisation. Individuals or teams across our offices in Australia can submit new ideas they think have the potential to improve our agency and better achieve its objectives. Challenges are open to ideas about any of our work. You can comment on your colleagues ideas and ‘support’ the ones you like and have interest in.</p>
<p><strong>What can the IMS do for me? </strong></p>
<p>The IMS allows you to share your ideas and collaborate with staff from across the Organisation with the aim of unlocking invaluable information and insights, and finding solutions for better ways for our Organisation to deliver its work. An IMS also enables you to explore, support, follow, or share ideas and innovation in the Organisation without actively participating in Challenges.</p>
<p><strong>How does the IMS assist the innovation process? </strong></p>
<p>Ideas are a key element in the innovation process, but without a mechanism for managing them, it can be difficult to prioritise innovative efforts and channel innovation activity into the areas it is needed most. The following identifies how the IMS can assist at each stage of the innovation process:</p>
<ul>
<li><strong>Challenge</strong>: Challenges are set and tap into the knowledge of Organisation staff to solve specific problems. They are sponsored and endorsed by Executive and are time-specific.</li>
<li><strong>Generate</strong> (finding, adapting or creating ideas): The IMS encourages staff to put forward ideas &nbsp;to a Challenge or placed them in the Brainstorm space.</li>
<li><strong>Select</strong> (choosing which ideas to use): Ideas are judged by the relevant Challenge sponsor (usually a member of the Organisation’s Executive team) and progressed for further collaboration. Not all ideas will be progressed to the Co-Lab. However, each will be considered in the development of a solution. In the collaboration space, the IMS can help to refine and iterate ideas by allowing others to share their perspectives, expertise and input.</li>
<li><strong>Decide</strong>: After user testing, refinement and rapid prototyping, it is decided whether the idea will become a project or implemented.</li>
<li><strong>Implement</strong> (putting the ideas into practice): The IMS assists in implementation if it records the lessons learnt, identifies options that have and have not worked, and determines what made the implementation successful.</li>
</ul>
<p><strong>When would I use the IMS? </strong></p>
<ul>
<li>Whenever you have a lightbulb moment or are feeling inspired.</li>
<li>When you want to read about what current challenges we have in the Organisation or what are the trending ideas in the Organisation.</li>
<li>When you have an idea but it needs some work or further development from someone with expertise in the area.</li>
<li>When you want to see and support other ideas.</li>
<li>When you think you have a solution to a challenge set by the Executive team.</li>
<li>When you want to collaborate with others in the Organisation and build on ideas.</li>
</ul>
<p><strong>Is there a how-to guide for IMS?</strong></p>
<p>Yes. A how-to guide is available on the Organisation’s IMS intranet page.</p>
<p><strong>How is this any different to other platforms I’m using?</strong></p>
<p>The IMS is different. It is not a social media forum or a SharePoint site. &nbsp;The IMS has been designed to specifically focus on innovation and seeing how ideas move through the stages of assessment before becoming a project. This collaborative, supportive space provides visibility of our ideas and what happens to them. Promising ideas will be progressed as a possible solution and &nbsp;those chosen will have Executive sponsorship and be given time to develop.</p>
<p><strong>Is the IMS accessible? </strong></p>
<p>Yes. The IMS has been designed and developed using the Web Content Accessibility Guidelines and the Organisation’s Visual Identity Style Guide.</p>
<p>&nbsp;</p>
<h3>Ideas</h3>
<p><strong>Is it mandatory to submit an idea?</strong></p>
<p>No. You can decide how involved you are. You may simply like to support or follow some ideas, or comment or provide input.</p>
<p><strong>What sort of ideas can I share?</strong></p>
<p>Your initial ideas can be about what we deliver or how we deliver it. Ideas could range from a proposal on how to do briefings more efficiently, how to tackle a specific policy or program, how to reduce internal red tape or a new IT device or application.</p>
<p>Thought should be given to impact, effectiveness, productivity gains and cost-efficiency.</p>
<p>Ideas that address a specific Challenge must include the above criterion and be specific to the Challenge.</p>
<p>An idea will be transformative if it is not only new or different, but influences and challenges the way we &nbsp;think and work in the long term.</p>
<p>Ideas should also aim to improve on what we currently do, perhaps by increasing efficiency.</p>
<p>Ideas should be submitted to make our agency better. Frame it in a way that ensures it’s clear and not a complaint. For example, a statement to ‘fix the intranet’ is not an idea, however, the idea could be ‘what if we were able to somehow link the organisational chart and the corporate directory?’</p>
<p><strong>How long should ideas be?</strong></p>
<p>An idea title should be brief, perhaps two to five words. The detailed idea should be no longer than 250 words, and can be supported with attachments.</p>
<p><strong>Who is accountable for my idea?</strong></p>
<p>You are responsible for ideas you put forward.</p>
<p><strong>How much effort will it involve if I post an idea?</strong></p>
<p>Your level of activity is completely up to you. Once you’ve submitted your idea, you have no obligations. You will be contacted if your idea wins a Challenge, and you will have the option to work in the Collaboration team to develop the idea further.</p>
<p><strong>Who will see my ideas?</strong></p>
<p>Anyone with active govIMS account can view, support, share and comment on your idea. Challenges have a sponsor, who will follow the progress of the challenge and choose the winning idea(s).</p>
<p><strong>Can I remain anonymous when submitting an idea?</strong></p>
<p>No, you cannot remain anonymous. The IMS encourages a transparent, collaborative environment.</p>
<p><strong>What if someone is inappropriate to me or my idea?</strong></p>
<p>All staff must adhere to the APS Code of Conduct when participating on the IMS. Any inappropriate behaviour will not be tolerated. A ‘Report inappropriate use’ button is also available to use if you see something that does not adhere to the Code of Conduct.</p>
<p><strong>Will there be training available?</strong></p>
<p>There are currently no set training courses available. However, team members from either the Business Improvement or Innovation Partnerships team are available to walk you through should you require it.</p>
<p><strong>How can I make my idea a success?</strong></p>
<p>An idea will be considered a success where it has resulted in improved practice, cost-efficiency or it has generated new information which informs&nbsp; future or related improvement. This does not guarantee an idea will be implemented.</p>
<p><strong>Who will judge my idea?</strong></p>
<p>Challenge Sponsors and the Senior Executive will judge each idea submitted to a Challenge. the Innovations Partnerships team will designate ideas to either the Senior Executive or the appropriate business area for judging and progression.</p>
<p><strong>What is the criterion for judging?</strong></p>
<p>When judging ideas, the following will be asked:</p>
<ul>
<li>Will it solve our Challenge?</li>
<li>What will the idea achieve?</li>
<li>How will it transform what we do?</li>
<li>What lessons can be learnt from testing the idea?</li>
<li>What will the early signals of success and failure be?</li>
<li>What is the potential impact if the idea fails?</li>
<li>What existing structures and processes need to change in order to implement the idea?</li>
<li>Does success have dependencies outside of the Organisation?</li>
</ul>
<p><strong>How long will an idea be published on the IMS for?</strong></p>
<p>Ideas will remain on the IMS for the duration of the Challenge. Ideas that do not progress to the collaboration stage, or have no activity for three months will be ‘Parked’ and can be retrieved at a later time if the idea can support a new Challenge.</p>
<p><strong>Will I receive anything if my idea wins?</strong></p>
<p>If your idea is selected to progress to the Collaboration stage you will be invited to be part of its development. You will receive a badge on your IMS profile at each stage your idea passes through towards Implementation. We want to celebrate and share these successes through internal communication channels.</p>
<p><strong>Will my idea be acknowledged?</strong></p>
<p>All ideas will be acknowledged via email when it is created unless notified otherwise, and whenever activity occurs in relation to your idea. You will also be notified if your idea has progressed to collaboration stage.</p>
<p>Regardless of how good an idea may be, the time might not be right to implement it.</p>
<p><strong>Will I be able to see what happens to my idea?</strong></p>
<p>Yes. Badges will appear on your collaboration page as your idea moves through the innovation process, so you will be able to see what stage your idea is in.</p>
<p><strong>What happens when I support an idea?</strong></p>
<p><strong>‘</strong>Supporting’ an idea will notify the creator that you support or ‘like’ their idea. It does not require you to be an active participant or provide input.</p>
<p><strong>What happens when I follow an idea?</strong></p>
<p>‘Following’ an idea will provide you with notifications when the idea progresses and each step of the journey. Content you follow will appear in your ‘My Hub’.</p>
<p><strong>What happens when I share an idea?</strong></p>
<p>If you think a colleague would like the idea or collaboration, you are able to ‘share’ this via email. This is a great way to increase engagement with your ideas, or ideas you support.</p>
<p><strong>What’s the difference between collaborating and commenting on an idea?</strong></p>
<p>You are able to comment on any idea throughout the site regardless of whether it is a collaboration. Collaborating is specific to ‘winning’ ideas selected for development in the innovation process. A collaboration team will take an idea through a cycle of rapid prototyping, iterating and refining, and user testing to determine whether an idea has potential to be a successful project and help solve the original Challenge. Collaboration involves further development of an idea, not just support of it.</p>
<p><strong>How will winning ideas be implemented?</strong></p>
<p>It will be the responsibility of the project team to continue the project under the sponsor’s direction. The Innovation Partnerships team is able to provide guidance and support.</p>
<p>&nbsp;</p>
<h3>Challenges</h3>
<p><strong>What is a Challenge?</strong></p>
<p>A Challenge is a problem that needs solving. It is a call to action addressing the big issues of the Organisation, sponsored by Executive and time limited.</p>
<p><strong>Can anyone set a Challenge? </strong></p>
<p>No, challenges can only be set by Executive or approved business areas.</p>
<p><strong>How can my business area set a Challenge?</strong></p>
<p>To set a Challenge on the site, contact the Innovations Partnerships team with an outline of the Challenge you wish to set.</p>
<p><strong>How do I know if my idea for a Challenge is successful? Is it from the number of supporters?</strong></p>
<p>If your idea is selected and wins a Challenge, you will be notified via email. The sponsor and Senior Executive will determine the successful idea. It will not be determined by the number of supporters. However, the number of supports will play a role in highlighting popular ideas.</p>
<p><strong>Can there be more than one successful idea? </strong></p>
<p>Yes, there can be more than one successful idea. Successful ideas will enter the Collaborate space to determine the viability for implementation.</p>
<p><strong>What happens if there is no activity on an idea?</strong></p>
<p>Ideas that do not progress to collaboration stage or have no activity for three months will be ‘Parked’ and can be retrieved at a later time if the idea can support a new Challenge.</p>
<p>&nbsp;</p>
<h3>Building on ideas</h3>
<p><strong>Why is building on ideas so important?</strong></p>
<p>Constructive feedback&nbsp;allows staff to refine their thinking, challenge themselves and be challenged. By working with others in different areas of the Organisation, knowledge and skills can be shared in order to make a project more successful than it might otherwise be. This naturally inspires a sense of community and allows staff to learn from each other.</p>
<p>&nbsp;</p>
<h3>Definitions</h3>
<p><strong>Iteration</strong></p>
<p>Iteration is when other staff suggest improvements to ideas or point out concerns or potential issues with its implementation. Alternatively, responses to ideas can be incorporated and the proposal adjusted to address those concerns. Such discussion can allow for ideas to be built upon and improved.</p>
<p><strong>Prototyping </strong></p>
<p>Prototyping in the IMS context means developing something quickly and cheaply that can be tested with users to gain feedback on what’s working and what isn’t.</p>
<p><strong>Idea</strong></p>
<p>An Idea is any document, material, content, text, diagram or illustration submitted to a Challenge or Brainstorm to solve one of the Organisation’s big issues.</p>
<p><strong>Challenge </strong></p>
<p>A Challenge is a specific problem that needs solving, sponsored by Executive and time specific.</p>
<p><strong>Implementation </strong></p>
<p>Implementation is the confirmation by the Organisation that it will implement an idea as a project. This will occur outside of the IMS site.</p>
<p><strong>Innovation</strong></p>
<p>Innovation refers to new ideas, approaches, business models, policy practices or technologies that are more effective than existing approaches.By more effective, innovation should deliver results at a lower cost, have broader impact or reach, or increase the quality or timeliness of departmental outcomes. For us, innovation means putting ideas into practice to add value for our people, stakeholders and clients.</p>
<p>&nbsp;</p>
<h3>Still don’t have the answer?</h3>
<p>Please contact the <a href="http://mailto:contact@collabforge.com">collabforge</a>&nbsp;team</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

return $content;
}
