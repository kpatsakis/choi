void fun()
{
  int entity_8 = 29;
  entity_8 = 29;
  char entity_3[entity_8] = "";
  char* entity_1;
  entity_1 = (char*)malloc(74*sizeof(char));
  entity_1[0]='0';
  memset(entity_3, 'x', entity_8-1);
  entity_3[entity_8-1]='0';
  strcpy(entity_1, entity_3);
}