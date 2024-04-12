void fun()
{
  char* entity_8;
  char entity_6[22] = "";
  char entity_2[65] = "";
  entity_8 = (char*)malloc(58*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'j', 65-1);
  entity_2[65-1]='0';
  memset(entity_6, 'K', 22-1);
  entity_6[22-1]='0';
  strcpy(entity_8, entity_6);
}