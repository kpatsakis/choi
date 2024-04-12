void fun()
{
  int entity_5 = 41;
  int entity_7 = 1;
  char entity_3[29] = "";
  entity_3 = NULL;
  char entity_4[33] = "";
  entity_4 = NULL;
  char* entity_2;
  memset(entity_4, 'A', 33-1);
  entity_4[33-1]='';
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[entity_5-1]='';
  memset(entity_3, 'J', 29-1);
  entity_3[29-1]='';
  strcpy(entity_2, entity_3);
}