void fun()
{
  int entity_2 = 73;
  char entity_6[76] = "";
  entity_6 = NULL;
  char* entity_5;
  memset(entity_6, 'm', 76-1);
  entity_6[76-1]='';
  entity_5 = (char*)malloc(45*sizeof(char));
  entity_5[45-1]='';
  strcpy(entity_5, entity_6);
}