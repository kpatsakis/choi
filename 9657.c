void fun()
{
  int entity_4 = 13;
  int entity_5 = 75;
  entity_4 = 65;
  char entity_0[36] = "";
  entity_0 = NULL;
  char* entity_8;
  char entity_9[95] = "";
  entity_9 = NULL;
  memset(entity_9, 'u', 95-1);
  entity_9[95-1]='';
  memset(entity_0, 'O', 36-1);
  entity_0[36-1]='';
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[entity_4-1]='';
  memcpy(entity_8, entity_0, 36*sizeof(char));
}