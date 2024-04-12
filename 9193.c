void fun()
{
  int entity_9 = 43;
  int entity_1 = 45;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(79*sizeof(char));
  entity_4[79-1]='';
  memset(entity_6, 'h', entity_9-1);
  entity_6[entity_9-1]='';
  memcpy(entity_4, entity_6, entity_9*sizeof(char));
}