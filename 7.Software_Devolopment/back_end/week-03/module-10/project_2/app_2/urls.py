from django.urls import path
# from app_2.views import home
# from app_2 import views
from . import views

urlpatterns = [
    path('',views.home),
]
