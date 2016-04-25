# square

require "shape"

class Square < Shape

	def initialize(aColor, aBorder, aSide)
	super(aColor, aBorder)
	@side = aSide
	
	end

	def draw
		puts "#{getColor()} square of side #{getSide()} and border #{getBorder()}."
	end

	def getSide
		@side
	end

end
