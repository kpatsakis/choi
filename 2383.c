void fun()
{
  int entity_0 = 10;
  entity_0 = 20;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(49*sizeof(char));
  entity_9[49-1]='';
  memset(entity_2, 'f', entity_0-1);
  entity_2[entity_0-1]='';
  memcpy(entity_9, entity_2, entity_0*sizeof(char));
}