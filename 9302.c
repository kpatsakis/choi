void fun()
{
  char entity_6[96] = "";
  entity_6 = NULL;
  char* entity_3;
  char entity_8[43] = "";
  entity_8 = NULL;
  entity_3 = (char*)malloc(60*sizeof(char));
  entity_3[60-1]='';
  memset(entity_6, 'n', 96-1);
  entity_6[96-1]='';
  memset(entity_8, 'z', 43-1);
  entity_8[43-1]='';
  strcpy(entity_3, entity_6);
}