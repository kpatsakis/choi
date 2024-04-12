void fun()
{
  int entity_5 = 23;
  entity_5 = 23;
  char* entity_8;
  char entity_1[entity_5] = "";
  entity_8 = (char*)malloc(7*sizeof(char));
  entity_8[0]='0';
  memset(entity_1, 'W', entity_5-1);
  entity_1[entity_5-1]='0';
  strcpy(entity_8, entity_1);
}