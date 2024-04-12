void fun()
{
  int entity_5 = 54;
  entity_5 = 42;
  char* entity_6;
  char entity_0[entity_5] = "";
  entity_0 = NULL;
  char* entity_9;
  entity_6 = (char*)malloc(11*sizeof(char));
  entity_6[11-1]='';
  memset(entity_0, 'E', entity_5-1);
  entity_0[entity_5-1]='';
  entity_9 = (char*)malloc(22*sizeof(char));
  entity_9[22-1]='';
  memcpy(entity_9, entity_0, entity_5*sizeof(char));
}