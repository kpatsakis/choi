void fun()
{
  char entity_6[58] = "";
  entity_6 = NULL;
  char* entity_1;
  char entity_0[90] = "";
  entity_0 = NULL;
  memset(entity_6, 'g', 58-1);
  entity_6[58-1]='';
  memset(entity_0, 'L', 90-1);
  entity_0[90-1]='';
  entity_1 = (char*)malloc(23*sizeof(char));
  entity_1[23-1]='';
  memcpy(entity_1, entity_6, 58*sizeof(char));
}