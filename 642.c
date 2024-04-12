void fun()
{
  int entity_0 = 27;
  entity_0 = 25;
  char entity_3[entity_0] = "";
  entity_3 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(3*sizeof(char));
  entity_9[3-1]='';
  memset(entity_3, 'P', entity_0-1);
  entity_3[entity_0-1]='';
  memcpy(entity_9, entity_3, entity_0*sizeof(char));
}