void fun()
{
  char entity_3[96] = "";
  entity_3 = NULL;
  char entity_8[100] = "";
  entity_8 = NULL;
  char entity_4[80] = "";
  entity_4 = NULL;
  char* entity_0;
  memset(entity_8, 'z', 100-1);
  entity_8[100-1]='';
  memset(entity_4, 'c', 80-1);
  entity_4[80-1]='';
  entity_0 = (char*)malloc(37*sizeof(char));
  entity_0[37-1]='';
  memset(entity_3, 'Q', 96-1);
  entity_3[96-1]='';
  memcpy(entity_0, entity_8, 100*sizeof(char));
}