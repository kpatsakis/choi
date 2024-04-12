void fun()
{
  int entity_5 = 98;
  char* entity_6;
  char entity_4[91] = "";
  entity_4 = NULL;
  char entity_0[91] = "";
  entity_0 = NULL;
  entity_6 = (char*)malloc(23*sizeof(char));
  entity_6[23-1]='';
  memset(entity_4, 'v', 91-1);
  entity_4[91-1]='';
  memset(entity_0, 'D', 91-1);
  entity_0[91-1]='';
  strcpy(entity_6, entity_0);
}