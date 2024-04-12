void fun()
{
  char* entity_8;
  char entity_5[25] = "";
  char entity_3[33] = "";
  memset(entity_5, 'H', 25-1);
  entity_5[25-1]='0';
  memset(entity_3, 'v', 33-1);
  entity_3[33-1]='0';
  entity_8 = (char*)malloc(7*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_3);
}