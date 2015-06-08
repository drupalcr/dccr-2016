Drupal.behaviors.comunidad = {
  attach: function (context, settings) {
    jQuery('.comunidad-superior').css('max-width', jQuery('.comunidad-superior .views-row').size() * 182);
    jQuery('.comunidad-inferior').css('max-width', jQuery('.comunidad-inferior .views-row').size() * 182);
  }
};
