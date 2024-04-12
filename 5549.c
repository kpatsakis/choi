void fun()
{
  int entity_7 = 46;
  char entity_9[49] = "";
  entity_9 = NULL;
  char* entity_3;
  char entity_8[86] = "";
  entity_8 = NULL;
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[entity_7-1]='';
  memset(entity_9, 'a', 49-1);
  entity_9[49-1]='';
  memset(entity_8, 'W', 86-1);
  entity_8[86-1]='';
  strcpy(entity_3, entity_9);
}