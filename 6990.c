void fun()
{
  int entity_9 = 61;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  char* entity_0;
  memset(entity_6, 'p', entity_9-1);
  entity_6[entity_9-1]='';
  entity_0 = (char*)malloc(18*sizeof(char));
  entity_0[18-1]='';
  entity_9 = 17;
  memcpy(entity_0, entity_6, entity_9*sizeof(char));
}