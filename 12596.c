void fun()
{
  int entity_9 = 77;
  char entity_0[19] = "";
  char* entity_4;
  memset(entity_0, 'c', 19-1);
  entity_0[19-1]='0';
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_0);
}