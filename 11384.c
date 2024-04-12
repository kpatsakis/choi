void fun()
{
  char* entity_3;
  char* entity_0;
  char entity_9[57] = "";
  char entity_8[76] = "";
  memset(entity_8, 'G', 76-1);
  entity_8[76-1]='0';
  entity_0 = (char*)malloc(24*sizeof(char));
  entity_0[0]='0';
  entity_3 = (char*)malloc(21*sizeof(char));
  entity_3[0]='0';
  memset(entity_9, 'n', 57-1);
  entity_9[57-1]='0';
  strcpy(entity_3, entity_8);
}