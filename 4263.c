void fun()
{
  int entity_8 = 97;
  char* entity_0;
  char entity_9[6] = "";
  entity_9 = NULL;
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[entity_8-1]='';
  memset(entity_9, 'j', 6-1);
  entity_9[6-1]='';
  strcpy(entity_0, entity_9);
}