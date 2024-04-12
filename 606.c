void fun()
{
  int entity_9 = 7;
  int entity_2 = 22;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  char entity_5 = 'e';
  char* entity_0;
  entity_0 = (char*)malloc(31*sizeof(char));
  entity_0[31-1]='';
  memset(entity_8, 'W', entity_9-1);
  entity_8[entity_9-1]='';
  memcpy(entity_0, entity_8, entity_9*sizeof(char));
}