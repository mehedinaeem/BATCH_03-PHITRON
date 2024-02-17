from django.urls import path
from . import views

urlpatterns = [
    path('', views.app_home),
    path('index/',views.index,name='index')
]
