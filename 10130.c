void fun()
{
  char entity_1[23] = "";
  char* entity_4;
  entity_4 = (char*)malloc(59*sizeof(char));
  entity_4[0]='0';
  memset(entity_1, 'B', 23-1);
  entity_1[23-1]='0';
  entity_1[97] = 'Q';
}