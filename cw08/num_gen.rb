#!/usr/bin/ruby
# -*- coding: utf-8 -*-

# Generator liczb losowych

r = Random.new

100.times do
  puts r.rand(1..100)
end
