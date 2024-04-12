void fun()
{
  int entity_6 = 38;
  char entity_0[11] = "";
  char* entity_9;
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[0]='0';
  memset(entity_0, 'l', 11-1);
  entity_0[11-1]='0';
  strcpy(entity_9, entity_0);
}