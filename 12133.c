void fun()
{
  int entity_6 = 62;
  char* entity_0;
  char entity_1[entity_6] = "";
  entity_0 = (char*)malloc(63*sizeof(char));
  entity_0[0]='0';
  memset(entity_1, 'G', entity_6-1);
  entity_1[entity_6-1]='0';
  strcpy(entity_0, entity_1);
}