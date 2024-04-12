void fun()
{
  int entity_9 = 72;
  entity_9 = 57;
  char entity_5[15] = "";
  entity_5 = NULL;
  char entity_3[63] = "";
  entity_3 = NULL;
  char entity_0[38] = "";
  entity_0 = NULL;
  char* entity_8;
  char entity_1[77] = "";
  entity_1 = NULL;
  memset(entity_3, 'P', 63-1);
  entity_3[63-1]='';
  memset(entity_0, 'w', 38-1);
  entity_0[38-1]='';
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[entity_9-1]='';
  memset(entity_1, 'f', 77-1);
  entity_1[77-1]='';
  memset(entity_5, 'v', 15-1);
  entity_5[15-1]='';
  memcpy(entity_8, entity_3, 63*sizeof(char));
}