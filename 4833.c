void fun()
{
  int entity_3 = 17;
  int entity_9 = 12;
  entity_3 = 68;
  char entity_6[79] = "";
  entity_6 = NULL;
  char entity_8[30] = "";
  entity_8 = NULL;
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(37*sizeof(char));
  entity_1[37-1]='';
  memset(entity_6, 'G', 79-1);
  entity_6[79-1]='';
  memset(entity_4, 't', entity_3-1);
  entity_4[entity_3-1]='';
  memset(entity_8, 'O', 30-1);
  entity_8[30-1]='';
  memcpy(entity_1, entity_4, entity_3*sizeof(char));
}