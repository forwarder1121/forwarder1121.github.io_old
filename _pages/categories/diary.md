---
title: "diary"
layout: archive
permalink: /diary/
---


{% assign posts = site.categories.diary %}
{% for post in posts %} {% include archive-single.html type=page.entries_layout %} {% endfor %}
