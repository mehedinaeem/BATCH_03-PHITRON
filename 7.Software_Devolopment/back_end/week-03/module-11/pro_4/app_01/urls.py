from django.urls import path
from . import views

urlpatterns = [
    path('',views.home,name='home'),
    path('hey/',views.hey,name='hey'),
    path('about/',views.about,name='about')
    
]
