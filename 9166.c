void fun()
{
  int entity_0 = 80;
  char* entity_9;
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  memset(entity_6, 'W', entity_0-1);
  entity_6[entity_0-1]='';
  entity_9 = (char*)malloc(48*sizeof(char));
  entity_9[48-1]='';
  memcpy(entity_9, entity_6, entity_0*sizeof(char));
}