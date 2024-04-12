void fun()
{
  int entity_2 = 39;
  int entity_7 = 45;
  int entity_0 = 95;
  char* entity_5;
  char entity_3[35] = "";
  entity_3 = NULL;
  memset(entity_3, 'c', 35-1);
  entity_3[35-1]='';
  entity_5 = (char*)malloc(39*sizeof(char));
  entity_5[39-1]='';
  strcpy(entity_5, entity_3);
}