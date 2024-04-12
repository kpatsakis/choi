void fun()
{
  char* entity_1;
  char entity_6 = 'Q';
  char entity_7[23] = "";
  memset(entity_7, 'g', 23-1);
  entity_7[23-1]='0';
  entity_1 = (char*)malloc(83*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_7);
}