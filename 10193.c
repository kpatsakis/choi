void fun()
{
  char entity_4[3] = "";
  char* entity_8;
  char entity_6[32] = "";
  memset(entity_4, 'f', 3-1);
  entity_4[3-1]='0';
  memset(entity_6, 'A', 32-1);
  entity_6[32-1]='0';
  entity_8 = (char*)malloc(55*sizeof(char));
  entity_8[0]='0';
  entity_6[30] = 'n';
}