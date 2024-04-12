void fun()
{
  int entity_5 = 66;
  int entity_7 = 49;
  char entity_0[entity_7] = "";
  char* entity_6;
  memset(entity_0, 'v', entity_7-1);
  entity_0[entity_7-1]='0';
  entity_6 = (char*)malloc(66*sizeof(char));
  entity_6[0]='0';
  entity_7 = 49;
  strcpy(entity_6, entity_0);
}