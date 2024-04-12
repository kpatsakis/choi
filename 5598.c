void fun()
{
  int entity_8 = 37;
  char* entity_9;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  memset(entity_4, 'z', entity_8-1);
  entity_4[entity_8-1]='';
  entity_9 = (char*)malloc(66*sizeof(char));
  entity_9[66-1]='';
  strcpy(entity_9, entity_4);
}