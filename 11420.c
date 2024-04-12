void fun()
{
  char entity_4[87] = "";
  char entity_8[23] = "";
  char entity_9 = 'd';
  char* entity_5;
  entity_5 = (char*)malloc(71*sizeof(char));
  entity_5[0]='0';
  memset(entity_4, 'c', 87-1);
  entity_4[87-1]='0';
  memset(entity_8, 'k', 23-1);
  entity_8[23-1]='0';
  strcpy(entity_5, entity_8);
}