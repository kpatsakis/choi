void fun()
{
  int entity_0 = 64;
  char* entity_8;
  char* entity_3;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  char entity_4[12] = "";
  entity_4 = NULL;
  memset(entity_1, 'v', entity_0-1);
  entity_1[entity_0-1]='';
  entity_3 = (char*)malloc(37*sizeof(char));
  entity_3[37-1]='';
  memset(entity_4, 'V', 12-1);
  entity_4[12-1]='';
  entity_8 = (char*)malloc(64*sizeof(char));
  entity_8[64-1]='';
  memcpy(entity_8, entity_1, entity_0*sizeof(char));
}