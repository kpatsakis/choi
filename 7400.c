void fun()
{
  int entity_8 = 8;
  entity_8 = 18;
  char* entity_6;
  char entity_0 = 'Z';
  char entity_9[95] = "";
  entity_9 = NULL;
  char entity_2 = 'v';
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  memset(entity_9, 'm', 95-1);
  entity_9[95-1]='';
  entity_6 = (char*)malloc(33*sizeof(char));
  entity_6[33-1]='';
  memset(entity_4, 'Z', entity_8-1);
  entity_4[entity_8-1]='';
  memcpy(entity_6, entity_4, entity_8*sizeof(char));
}