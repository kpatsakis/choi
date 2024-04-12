void fun()
{
  int entity_0 = 23;
  int entity_8 = 97;
  char* entity_9;
  char entity_7[entity_0] = "";
  entity_7 = NULL;
  entity_9 = (char*)malloc(31*sizeof(char));
  entity_9[31-1]='';
  memset(entity_7, 'H', entity_0-1);
  entity_7[entity_0-1]='';
  memcpy(entity_9, entity_7, entity_0*sizeof(char));
}