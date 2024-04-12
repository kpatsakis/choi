void fun()
{
  int entity_7 = 85;
  char* entity_4;
  char entity_0[72] = "";
  char entity_9 = 'v';
  memset(entity_0, 'c', 72-1);
  entity_0[72-1]='0';
  entity_4 = (char*)malloc(entity_7*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_0);
}