void fun()
{
  char entity_1[14] = "";
  char* entity_4;
  memset(entity_1, 'D', 14-1);
  entity_1[14-1]='0';
  entity_4 = (char*)malloc(66*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_1);
}