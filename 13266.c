void fun()
{
  int entity_5 = 54;
  entity_5 = 54;
  char entity_4[entity_5] = "";
  char* entity_8;
  entity_8 = (char*)malloc(15*sizeof(char));
  entity_8[0]='0';
  memset(entity_4, 'P', entity_5-1);
  entity_4[entity_5-1]='0';
  strcpy(entity_8, entity_4);
}