void fun()
{
  int entity_9 = 19;
  int entity_0 = 24;
  entity_0 = 47;
  char* entity_6;
  char entity_5[entity_0] = "";
  entity_5 = NULL;
  char entity_7 = 'y';
  char entity_4[95] = "";
  entity_4 = NULL;
  memset(entity_5, 'j', entity_0-1);
  entity_5[entity_0-1]='';
  entity_6 = (char*)malloc(55*sizeof(char));
  entity_6[55-1]='';
  memset(entity_4, 'y', 95-1);
  entity_4[95-1]='';
  memcpy(entity_6, entity_5, entity_0*sizeof(char));
}