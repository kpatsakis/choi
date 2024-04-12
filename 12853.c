void fun()
{
  int entity_5 = 15;
  char* entity_9;
  char entity_3 = 'Z';
  char entity_0[64] = "";
  char entity_8 = 'W';
  memset(entity_0, 'b', 64-1);
  entity_0[64-1]='0';
  entity_9 = (char*)malloc(entity_5*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_0);
}