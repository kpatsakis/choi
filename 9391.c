void fun()
{
  int entity_2 = 77;
  int entity_7 = 84;
  int entity_4 = 2;
  char* entity_0;
  char entity_1[42] = "";
  entity_1 = NULL;
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[entity_2-1]='';
  memset(entity_1, 'q', 42-1);
  entity_1[42-1]='';
  entity_2 = 21;
  strcpy(entity_0, entity_1);
}