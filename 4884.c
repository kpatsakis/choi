void fun()
{
  int entity_8 = 70;
  char* entity_9;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  memset(entity_7, 'p', entity_8-1);
  entity_7[entity_8-1]='';
  entity_9 = (char*)malloc(66*sizeof(char));
  entity_9[66-1]='';
  memcpy(entity_9, entity_7, entity_8*sizeof(char));
}