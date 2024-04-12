void fun()
{
  int entity_0 = 50;
  int entity_1 = 38;
  char* entity_4;
  char entity_3 = 'a';
  char entity_9[entity_0] = "";
  entity_9 = NULL;
  memset(entity_9, 'N', entity_0-1);
  entity_9[entity_0-1]='';
  entity_4 = (char*)malloc(32*sizeof(char));
  entity_4[32-1]='';
  memcpy(entity_4, entity_9, entity_0*sizeof(char));
}