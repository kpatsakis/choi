void fun()
{
  char* entity_8;
  char entity_6[15] = "";
  entity_6 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(86*sizeof(char));
  entity_0[86-1]='';
  entity_8 = (char*)malloc(0*sizeof(char));
  entity_8[0-1]='';
  memset(entity_6, 'h', 15-1);
  entity_6[15-1]='';
  strcpy(entity_0, entity_6);
}