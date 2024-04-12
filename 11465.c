void fun()
{
  char* entity_0;
  char* entity_6;
  char entity_5[30] = "";
  entity_0 = (char*)malloc(27*sizeof(char));
  entity_0[0]='0';
  entity_6 = (char*)malloc(98*sizeof(char));
  entity_6[0]='0';
  memset(entity_5, 'w', 30-1);
  entity_5[30-1]='0';
  strcpy(entity_6, entity_5);
}