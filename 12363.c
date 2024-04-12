void fun()
{
  int entity_5 = 93;
  int entity_2 = 38;
  int entity_7 = 88;
  char entity_6[93] = "";
  char* entity_0;
  char entity_8[entity_7] = "";
  memset(entity_6, 'A', 93-1);
  entity_6[93-1]='0';
  entity_0 = (char*)malloc(51*sizeof(char));
  entity_0[0]='0';
  memset(entity_8, 'j', entity_7-1);
  entity_8[entity_7-1]='0';
  strcpy(entity_0, entity_8);
}