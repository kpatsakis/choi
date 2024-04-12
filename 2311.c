void fun()
{
  int entity_8 = 6;
  int entity_7 = 25;
  int entity_1 = 11;
  char entity_3[81] = "";
  entity_3 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_7*sizeof(char));
  entity_9[entity_7-1]='';
  memset(entity_3, 'l', 81-1);
  entity_3[81-1]='';
  strcpy(entity_9, entity_3);
}