void fun()
{
  int entity_8 = 40;
  entity_8 = 85;
  char* entity_9;
  char entity_1[3] = "";
  entity_1 = NULL;
  char entity_4[2] = "";
  entity_4 = NULL;
  char entity_0[62] = "";
  entity_0 = NULL;
  char entity_6[67] = "";
  entity_6 = NULL;
  memset(entity_6, 'u', 67-1);
  entity_6[67-1]='';
  memset(entity_0, 'G', 62-1);
  entity_0[62-1]='';
  memset(entity_4, 'j', 2-1);
  entity_4[2-1]='';
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  memset(entity_1, 'K', 3-1);
  entity_1[3-1]='';
  memcpy(entity_9, entity_0, 62*sizeof(char));
}