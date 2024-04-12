void fun()
{
  char entity_4[76] = "";
  entity_4 = NULL;
  char* entity_5;
  char entity_0[65] = "";
  entity_0 = NULL;
  memset(entity_4, 'o', 76-1);
  entity_4[76-1]='';
  entity_5 = (char*)malloc(65*sizeof(char));
  entity_5[65-1]='';
  memset(entity_0, 'P', 65-1);
  entity_0[65-1]='';
  memcpy(entity_5, entity_0, 65*sizeof(char));
}