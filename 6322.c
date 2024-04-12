void fun()
{
  int entity_0 = 51;
  char* entity_1;
  char entity_3[80] = "";
  entity_3 = NULL;
  char entity_4[15] = "";
  entity_4 = NULL;
  char entity_6[75] = "";
  entity_6 = NULL;
  memset(entity_4, 'M', 15-1);
  entity_4[15-1]='';
  memset(entity_6, 'n', 75-1);
  entity_6[75-1]='';
  memset(entity_3, 'L', 80-1);
  entity_3[80-1]='';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  entity_0 = 62;
  memcpy(entity_1, entity_6, 75*sizeof(char));
}