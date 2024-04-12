void fun()
{
  int entity_5 = 29;
  int entity_7 = 25;
  char* entity_3;
  char* entity_9;
  char entity_0[entity_5] = "";
  entity_0 = NULL;
  entity_9 = (char*)malloc(81*sizeof(char));
  entity_9[81-1]='';
  memset(entity_0, 'U', entity_5-1);
  entity_0[entity_5-1]='';
  entity_3 = (char*)malloc(48*sizeof(char));
  entity_3[48-1]='';
  entity_5 = 22;
  memcpy(entity_9, entity_0, entity_5*sizeof(char));
}