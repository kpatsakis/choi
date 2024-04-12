void fun()
{
  int entity_3 = 46;
  char* entity_0;
  char entity_4[entity_3] = "";
  entity_0 = (char*)malloc(10*sizeof(char));
  entity_0[0]='0';
  memset(entity_4, 'x', entity_3-1);
  entity_4[entity_3-1]='0';
  strcpy(entity_0, entity_4);
}