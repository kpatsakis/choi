void fun()
{
  int entity_5 = 97;
  char entity_8[entity_5] = "";
  char* entity_1;
  entity_1 = (char*)malloc(32*sizeof(char));
  entity_1[0]='0';
  memset(entity_8, 'i', entity_5-1);
  entity_8[entity_5-1]='0';
  entity_5 = 49;
  strcpy(entity_1, entity_8);
}