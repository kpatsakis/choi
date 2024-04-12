void fun()
{
  int entity_4 = 29;
  char* entity_0;
  char entity_5[83] = "";
  memset(entity_5, 'n', 83-1);
  entity_5[83-1]='0';
  entity_0 = (char*)malloc(entity_4*sizeof(char));
  entity_0[0]='0';
  entity_4 = 45;
  strcpy(entity_0, entity_5);
}