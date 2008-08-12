
module ButtonMaker
  def button_for(name, url, image)
    html = "<a class=\"button\" href=\"#{url}\">"
  	html << "  <img src=\"/css/blueprint/plugins/buttons/icons/#{image}.png\" alt=\"\"/> #{name}"
  	html << "</a>"
  	html
  end
end

Webby::Helpers.register(ButtonMaker)