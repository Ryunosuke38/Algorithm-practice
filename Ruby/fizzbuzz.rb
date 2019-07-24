def FizzBuzz(n)
  if (n % 3 == 0 && n % 5 ==0)
    return "FizzBuzz"
  elsif (n % 3 == 0)
    return "Fizz"
  elsif (n % 5 == 0)
    return "Buzz"
  else
    return n
  end
end

(1..100).to_a.map {|n| puts FizzBuzz(n)}
