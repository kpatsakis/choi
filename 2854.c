void fun()
{
  int entity_0 = 8;
  int entity_3 = 46;
  char entity_9[53] = "";
  entity_9 = NULL;
  char* entity_8;
  char entity_4 = 'J';
  memset(entity_9, 'n', 53-1);
  entity_9[53-1]='';
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  strcpy(entity_8, entity_9);
}