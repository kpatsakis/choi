void fun()
{
  int entity_5 = 83;
  char entity_7[49] = "";
  char* entity_0;
  memset(entity_7, 'x', 49-1);
  entity_7[49-1]='0';
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_7);
}