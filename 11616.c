void fun()
{
  int entity_8 = 86;
  char* entity_0;
  char entity_1[17] = "";
  entity_0 = (char*)malloc(32*sizeof(char));
  entity_0[0]='0';
  memset(entity_1, 'K', 17-1);
  entity_1[17-1]='0';
  strcpy(entity_0, entity_1);
}