void fun()
{
  char entity_8[27] = "";
  entity_8 = NULL;
  char entity_0[8] = "";
  entity_0 = NULL;
  char entity_1[58] = "";
  entity_1 = NULL;
  char* entity_5;
  char entity_6[77] = "";
  entity_6 = NULL;
  memset(entity_0, 'd', 8-1);
  entity_0[8-1]='';
  memset(entity_6, 'r', 77-1);
  entity_6[77-1]='';
  memset(entity_8, 'l', 27-1);
  entity_8[27-1]='';
  entity_5 = (char*)malloc(38*sizeof(char));
  entity_5[38-1]='';
  memset(entity_1, 'd', 58-1);
  entity_1[58-1]='';
  memcpy(entity_5, entity_8, 27*sizeof(char));
}