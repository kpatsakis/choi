void fun()
{
  char entity_4[29] = "";
  char* entity_8;
  char entity_7[26] = "";
  memset(entity_7, 'E', 26-1);
  entity_7[26-1]='0';
  entity_8 = (char*)malloc(50*sizeof(char));
  entity_8[0]='0';
  memset(entity_4, 'n', 29-1);
  entity_4[29-1]='0';
  strcpy(entity_8, entity_4);
}