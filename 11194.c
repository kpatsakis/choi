void fun()
{
  char* entity_1;
  char entity_6[61] = "";
  char entity_3[29] = "";
  entity_1 = (char*)malloc(75*sizeof(char));
  entity_1[0]='0';
  memset(entity_6, 'h', 61-1);
  entity_6[61-1]='0';
  memset(entity_3, 'X', 29-1);
  entity_3[29-1]='0';
  strcpy(entity_1, entity_6);
}