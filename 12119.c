void fun()
{
  int entity_4 = 87;
  char entity_1[entity_4] = "";
  char* entity_0;
  entity_0 = (char*)malloc(6*sizeof(char));
  entity_0[0]='0';
  memset(entity_1, 'R', entity_4-1);
  entity_1[entity_4-1]='0';
  strcpy(entity_0, entity_1);
}