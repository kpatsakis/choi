void fun()
{
  int entity_5 = 7;
  char* entity_0;
  char entity_9 = 'd';
  char entity_6[5] = "";
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[0]='0';
  memset(entity_6, 'x', 5-1);
  entity_6[5-1]='0';
  strcpy(entity_0, entity_6);
}