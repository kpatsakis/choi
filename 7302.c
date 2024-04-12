void fun()
{
  int entity_9 = 58;
  char* entity_4;
  char entity_8 = 'm';
  char entity_7[46] = "";
  entity_7 = NULL;
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[entity_9-1]='';
  memset(entity_7, 'k', 46-1);
  entity_7[46-1]='';
  strcpy(entity_4, entity_7);
}