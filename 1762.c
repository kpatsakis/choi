void fun()
{
  int entity_9 = 93;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  char* entity_8;
  memset(entity_0, 'R', entity_9-1);
  entity_0[entity_9-1]='';
  entity_8 = (char*)malloc(76*sizeof(char));
  entity_8[76-1]='';
  strcpy(entity_8, entity_0);
}