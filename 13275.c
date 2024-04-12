void fun()
{
  int entity_5 = 24;
  char entity_3[entity_5] = "";
  char* entity_1;
  memset(entity_3, 'Z', entity_5-1);
  entity_3[entity_5-1]='0';
  entity_1 = (char*)malloc(23*sizeof(char));
  entity_1[0]='0';
  entity_5 = 38;
  strcpy(entity_1, entity_3);
}