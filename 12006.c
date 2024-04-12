void fun()
{
  int entity_0 = 79;
  char* entity_8;
  char entity_5[entity_0] = "";
  entity_8 = (char*)malloc(26*sizeof(char));
  entity_8[0]='0';
  memset(entity_5, 'l', entity_0-1);
  entity_5[entity_0-1]='0';
  strcpy(entity_8, entity_5);
}