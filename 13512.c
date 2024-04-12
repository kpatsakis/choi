void fun()
{
  int entity_8 = 48;
  entity_8 = 48;
  char entity_0[entity_8] = "";
  char* entity_4;
  entity_4 = (char*)malloc(55*sizeof(char));
  entity_4[0]='0';
  memset(entity_0, 'B', entity_8-1);
  entity_0[entity_8-1]='0';
  strcpy(entity_4, entity_0);
}