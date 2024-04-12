void fun()
{
  int entity_1 = 94;
  entity_1 = 94;
  char entity_8[53] = "";
  char* entity_9;
  char entity_6[entity_1] = "";
  entity_9 = (char*)malloc(55*sizeof(char));
  entity_9[0]='0';
  memset(entity_8, 'g', 53-1);
  entity_8[53-1]='0';
  memset(entity_6, 'a', entity_1-1);
  entity_6[entity_1-1]='0';
  strcpy(entity_9, entity_6);
}