$(document).ready(function() {
  function change($tr, val) {
    var $input = $tr.find('.quantity');
    var count = parseInt($input.val()) + val;
    count = count < 1 ? 1 : count;
    $input.val(count);
    var $price = $tr.find('.count_price');
    $price.text(count * $price.data('price'));
  }
  $('.minus').click(function() {
    change($(this).closest('tr'), -1);
  });
  $('.plus').click(function() {
    change($(this).closest('tr'), 1);
  });
  $('.quantity').on("input", function() {
    var $price = $(this).closest('tr').find('.count_price');
    $price.text(this.value * $price.data('price'));
  });
});