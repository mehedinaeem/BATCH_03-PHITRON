from django.urls import path
from . import views

urlpatterns = [
    path("",views.main),
    path("contact/",views.contact),
    path("home/",views.home),
]