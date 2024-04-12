void fun()
{
  char entity_1[81] = "";
  char* entity_4;
  entity_4 = (char*)malloc(50*sizeof(char));
  entity_4[0]='0';
  memset(entity_1, 'h', 81-1);
  entity_1[81-1]='0';
  strcpy(entity_4, entity_1);
}