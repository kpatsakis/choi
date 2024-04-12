void fun()
{
  char* entity_7;
  char entity_0[76] = "";
  char entity_4[65] = "";
  memset(entity_0, 'U', 76-1);
  entity_0[76-1]='0';
  memset(entity_4, 'b', 65-1);
  entity_4[65-1]='0';
  entity_7 = (char*)malloc(8*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_0);
}