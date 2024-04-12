void fun()
{
  char* entity_0;
  char entity_8[81] = "";
  char* entity_4;
  entity_4 = (char*)malloc(41*sizeof(char));
  entity_4[0]='0';
  memset(entity_8, 'J', 81-1);
  entity_8[81-1]='0';
  entity_0 = (char*)malloc(72*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_4, entity_8);
}