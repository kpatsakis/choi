void fun()
{
  char* entity_5;
  char entity_7[23] = "";
  entity_7 = NULL;
  char entity_0[83] = "";
  entity_0 = NULL;
  char* entity_4;
  entity_5 = (char*)malloc(55*sizeof(char));
  entity_5[55-1]='';
  memset(entity_0, 'f', 83-1);
  entity_0[83-1]='';
  entity_4 = (char*)malloc(84*sizeof(char));
  entity_4[84-1]='';
  memset(entity_7, 'G', 23-1);
  entity_7[23-1]='';
  strcpy(entity_5, entity_7);
}