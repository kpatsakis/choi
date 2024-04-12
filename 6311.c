void fun()
{
  int entity_0 = 34;
  char* entity_9;
  char entity_8[entity_0] = "";
  entity_8 = NULL;
  memset(entity_8, 'G', entity_0-1);
  entity_8[entity_0-1]='';
  entity_9 = (char*)malloc(75*sizeof(char));
  entity_9[75-1]='';
  entity_0 = 33;
  memcpy(entity_9, entity_8, entity_0*sizeof(char));
}