from django.urls import path
from . import views

urlpatterns = [
    path('app_admin', views.app_admin),
    # path('contact/',views.contact),
    path("",views.home)
]
