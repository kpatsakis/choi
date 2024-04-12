void fun()
{
  int entity_9 = 72;
  char entity_0[72] = "";
  char entity_4[83] = "";
  char* entity_6;
  memset(entity_4, 'E', 83-1);
  entity_4[83-1]='0';
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[0]='0';
  memset(entity_0, 'q', 72-1);
  entity_0[72-1]='0';
  strcpy(entity_6, entity_4);
}