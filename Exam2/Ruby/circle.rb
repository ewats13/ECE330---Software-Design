# circle

require "shape"

class Circle < Shape

	def initialize(aColor, aBorder, aRadius)
	super(aColor, aBorder)
	@radius = aRadius

	end
	

	def draw
		puts "#{getColor()} circle of radius #{getRadius()} and border #{getBorder()}."
	end

	def getRadius 
		@radius
	end


end
