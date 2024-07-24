$('#navigation_2_dropdown_1').on("click", function(){
    $('.dropdown-menu').toggleClass("active");
});

$('.dropdown-menu div div').on('click' , function(){	$('#navigation_2_dropdown_1').text($(this).text()); 
$('.dropdown-menu').toggleClass("active");																										
})



$(document).ready(function () {
    $(window).scroll(function () {
      if ($(document).scrollTop() > 100) {
        $("nav").css("background-color", "#303030");
        $("nav").css("box-shadow", "rgba(0, 0, 0, 0.35) 0px 5px 15px");
      } else {
        $("nav").css("background-color", "transparent");
        $("nav").css("box-shadow", "none");
      }
    });
  
    var swiper = new Swiper(".mySwiper", {
      speed: 700,
      autoplay:true,
      loop: true,
      effect: "fade",
      navigation: {
        nextEl: ".swiper-button-next",
        prevEl: ".swiper-button-prev",
      },
      pagination: {
        el: ".swiper-pagination",
        clickable: true,
      },
      on: {
        slideChangeTransitionEnd: function () {
          // Ensure animation remains the same
          $('.swiper-slide .animate-text').css('animation', 'none');
          setTimeout(function () {
            $('.swiper-slide-active .animate-text').css('animation', 'fade-image 1.5s forwards');
          },10);
        }
      }
    });
  });