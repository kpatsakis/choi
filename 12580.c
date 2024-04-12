void fun()
{
  int entity_3 = 15;
  char* entity_8;
  char entity_4 = 'v';
  char entity_0[entity_3] = "";
  memset(entity_0, 'L', entity_3-1);
  entity_0[entity_3-1]='0';
  entity_8 = (char*)malloc(7*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_0);
}