void fun()
{
  int entity_8 = 3;
  entity_8 = 3;
  char* entity_9;
  char entity_0[entity_8] = "";
  entity_0 = NULL;
  memset(entity_0, 'e', entity_8-1);
  entity_0[entity_8-1]='';
  entity_9 = (char*)malloc(13*sizeof(char));
  entity_9[13-1]='';
  strcpy(entity_9, entity_0);
}