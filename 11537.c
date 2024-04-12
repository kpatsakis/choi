void fun()
{
  char entity_8 = 'Q';
  char entity_5[28] = "";
  char* entity_6;
  entity_6 = (char*)malloc(9*sizeof(char));
  entity_6[0]='0';
  memset(entity_5, 'Q', 28-1);
  entity_5[28-1]='0';
  strcpy(entity_6, entity_5);
}