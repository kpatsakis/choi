void fun()
{
  int entity_3 = 14;
  char* entity_6;
  char entity_1[12] = "";
  entity_1 = NULL;
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  char entity_0[7] = "";
  entity_0 = NULL;
  memset(entity_1, 'e', 12-1);
  entity_1[12-1]='';
  memset(entity_4, 's', entity_3-1);
  entity_4[entity_3-1]='';
  memset(entity_0, 'R', 7-1);
  entity_0[7-1]='';
  entity_6 = (char*)malloc(60*sizeof(char));
  entity_6[60-1]='';
  memcpy(entity_6, entity_4, entity_3*sizeof(char));
}