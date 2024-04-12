void fun()
{
  char entity_7[12] = "";
  char* entity_4;
  entity_4 = (char*)malloc(58*sizeof(char));
  entity_4[0]='0';
  memset(entity_7, 'G', 12-1);
  entity_7[12-1]='0';
  strcpy(entity_4, entity_7);
}