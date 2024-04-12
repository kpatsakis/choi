void fun()
{
  int entity_2 = 11;
  char entity_4[90] = "";
  entity_4 = NULL;
  char entity_5[64] = "";
  entity_5 = NULL;
  char entity_9[91] = "";
  entity_9 = NULL;
  char* entity_0;
  char* entity_7;
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[entity_2-1]='';
  memset(entity_9, 'O', 91-1);
  entity_9[91-1]='';
  memset(entity_5, 'N', 64-1);
  entity_5[64-1]='';
  entity_7 = (char*)malloc(58*sizeof(char));
  entity_7[58-1]='';
  memset(entity_4, 'L', 90-1);
  entity_4[90-1]='';
  entity_2 = 92;
  memcpy(entity_0, entity_4, 90*sizeof(char));
}