void fun()
{
  int entity_1 = 17;
  char entity_8[1] = "";
  entity_8 = NULL;
  char entity_6[90] = "";
  entity_6 = NULL;
  char* entity_0;
  char* entity_9;
  memset(entity_6, 'U', 90-1);
  entity_6[90-1]='';
  entity_9 = (char*)malloc(18*sizeof(char));
  entity_9[18-1]='';
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[entity_1-1]='';
  memset(entity_8, 'V', 1-1);
  entity_8[1-1]='';
  memcpy(entity_0, entity_6, 90*sizeof(char));
}