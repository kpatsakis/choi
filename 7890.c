void fun()
{
  int entity_0 = 98;
  char entity_7[entity_0] = "";
  entity_7 = NULL;
  char* entity_9;
  memset(entity_7, 'l', entity_0-1);
  entity_7[entity_0-1]='';
  entity_9 = (char*)malloc(9*sizeof(char));
  entity_9[9-1]='';
  entity_0 = 18;
  memcpy(entity_9, entity_7, entity_0*sizeof(char));
}