void fun()
{
  int entity_8 = 42;
  entity_8 = 90;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(50*sizeof(char));
  entity_0[50-1]='';
  memset(entity_9, 'Z', entity_8-1);
  entity_9[entity_8-1]='';
  memcpy(entity_0, entity_9, entity_8*sizeof(char));
}