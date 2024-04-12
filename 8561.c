void fun()
{
  int entity_7 = 13;
  int entity_5 = 18;
  char* entity_8;
  char entity_9[48] = "";
  entity_9 = NULL;
  memset(entity_9, 'K', 48-1);
  entity_9[48-1]='';
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[entity_7-1]='';
  strcpy(entity_8, entity_9);
}