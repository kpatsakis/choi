void fun()
{
  int entity_3 = 99;
  entity_3 = 99;
  char entity_9[entity_3] = "";
  char* entity_8;
  memset(entity_9, 'L', entity_3-1);
  entity_9[entity_3-1]='0';
  entity_8 = (char*)malloc(58*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_9);
}