void fun()
{
  char entity_1[23] = "";
  char* entity_5;
  char entity_6[60] = "";
  memset(entity_1, 'F', 23-1);
  entity_1[23-1]='0';
  memset(entity_6, 'n', 60-1);
  entity_6[60-1]='0';
  entity_5 = (char*)malloc(31*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_1, 23*sizeof(char));
}