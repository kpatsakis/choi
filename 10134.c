void fun()
{
  char entity_5[20] = "";
  char* entity_4;
  char entity_2[12] = "";
  memset(entity_5, 'L', 20-1);
  entity_5[20-1]='0';
  entity_4 = (char*)malloc(17*sizeof(char));
  entity_4[0]='0';
  memset(entity_2, 't', 12-1);
  entity_2[12-1]='0';
  entity_5[91] = 'c';
}