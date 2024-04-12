void fun()
{
  int entity_5 = 8;
  char entity_4 = 'T';
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(66*sizeof(char));
  entity_7[66-1]='';
  memset(entity_9, 'D', entity_5-1);
  entity_9[entity_5-1]='';
  memcpy(entity_7, entity_9, entity_5*sizeof(char));
}