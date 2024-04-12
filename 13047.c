void fun()
{
  int entity_8 = 19;
  entity_8 = 19;
  char entity_1[entity_8] = "";
  char* entity_0;
  entity_0 = (char*)malloc(1*sizeof(char));
  entity_0[0]='0';
  memset(entity_1, 'E', entity_8-1);
  entity_1[entity_8-1]='0';
  strcpy(entity_0, entity_1);
}