void fun()
{
  int entity_2 = 49;
  entity_2 = 49;
  char* entity_1;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  char entity_0[42] = "";
  entity_0 = NULL;
  entity_1 = (char*)malloc(82*sizeof(char));
  entity_1[82-1]='';
  memset(entity_4, 'L', entity_2-1);
  entity_4[entity_2-1]='';
  memset(entity_0, 'S', 42-1);
  entity_0[42-1]='';
  strcpy(entity_1, entity_4);
}