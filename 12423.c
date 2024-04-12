void fun()
{
  int entity_0 = 4;
  char entity_9[60] = "";
  char* entity_6;
  char entity_5 = 'I';
  entity_6 = (char*)malloc(entity_0*sizeof(char));
  entity_6[0]='0';
  memset(entity_9, 'x', 60-1);
  entity_9[60-1]='0';
  strcpy(entity_6, entity_9);
}