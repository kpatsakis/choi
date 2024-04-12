void fun()
{
  int entity_1 = 21;
  int entity_5 = 36;
  char* entity_0;
  char entity_9[9] = "";
  entity_9 = NULL;
  memset(entity_9, 'u', 9-1);
  entity_9[9-1]='';
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[entity_1-1]='';
  entity_1 = 20;
  memcpy(entity_0, entity_9, 9*sizeof(char));
}