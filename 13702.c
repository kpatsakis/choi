void fun()
{
  int entity_1 = 42;
  entity_1 = 42;
  char entity_0[entity_1] = "";
  char* entity_7;
  memset(entity_0, 'R', entity_1-1);
  entity_0[entity_1-1]='0';
  entity_7 = (char*)malloc(57*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_0);
}