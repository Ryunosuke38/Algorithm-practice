def bingo_generate_card
  b_nums = [*1..15].shuffle.sample(5)
  i_nums = [*16..30].shuffle.sample(5)
  n_nums = [*31..45].shuffle.sample(5)
  g_nums = [*46..60].shuffle.sample(5)
  o_nums = [*61..75].shuffle.sample(5)

  names = ["B", "I", "N", "G", "O"]
  puts names.map {|a| a.rjust(3)}.join("|")
  i = 0
  while i < 5 do
    all_nums = []
    if i == 2
      all_nums.push(b_nums[i], i_nums[i], "" , g_nums[i], o_nums[i])
    else
      all_nums.push(b_nums[i], i_nums[i], n_nums[i], g_nums[i], o_nums[i])
    end
    puts all_nums.map {|e| e.to_s.rjust(3)}.join("|")
    i += 1
  end
end

bingo_generate_card
