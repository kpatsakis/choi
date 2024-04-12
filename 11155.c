void fun()
{
  char* entity_1;
  char entity_0[21] = "";
  char entity_8[23] = "";
  memset(entity_0, 'K', 21-1);
  entity_0[21-1]='0';
  entity_1 = (char*)malloc(19*sizeof(char));
  entity_1[0]='0';
  memset(entity_8, 'B', 23-1);
  entity_8[23-1]='0';
  strcpy(entity_1, entity_8);
}