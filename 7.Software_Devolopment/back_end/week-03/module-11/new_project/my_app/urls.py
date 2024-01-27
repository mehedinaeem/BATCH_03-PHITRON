from django.urls import path
from . import views

urlpatterns = [
    path('',views.home),
    path('app_index/',views.app_index)
]
