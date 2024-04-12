void fun()
{
  int entity_0 = 53;
  entity_0 = 82;
  char* entity_3;
  char entity_9[entity_0] = "";
  entity_9 = NULL;
  memset(entity_9, 'f', entity_0-1);
  entity_9[entity_0-1]='';
  entity_3 = (char*)malloc(88*sizeof(char));
  entity_3[88-1]='';
  memcpy(entity_3, entity_9, entity_0*sizeof(char));
}