void fun()
{
  char entity_7[76] = "";
  entity_7 = NULL;
  char* entity_2;
  memset(entity_7, 'w', 76-1);
  entity_7[76-1]='';
  entity_2 = (char*)malloc(61*sizeof(char));
  entity_2[61-1]='';
  entity_7[87] = 'y';
}