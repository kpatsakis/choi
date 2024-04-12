void fun()
{
  int entity_8 = 66;
  int entity_0 = 28;
  int entity_3 = 71;
  char* entity_5;
  char entity_2[9] = "";
  entity_2 = NULL;
  memset(entity_2, 'J', 9-1);
  entity_2[9-1]='';
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[entity_8-1]='';
  strcpy(entity_5, entity_2);
}