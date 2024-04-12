void fun()
{
  int entity_6 = 42;
  int entity_4 = 58;
  entity_4 = 58;
  char entity_1[entity_4] = "";
  entity_1 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(42*sizeof(char));
  entity_8[42-1]='';
  memset(entity_1, 'k', entity_4-1);
  entity_1[entity_4-1]='';
  strcpy(entity_8, entity_1);
}