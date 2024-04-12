void fun()
{
  int entity_5 = 100;
  char* entity_9;
  char entity_0[35] = "";
  memset(entity_0, 'c', 35-1);
  entity_0[35-1]='0';
  entity_9 = (char*)malloc(entity_5*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_0);
}