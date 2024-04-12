void fun()
{
  int entity_8 = 70;
  char entity_0[entity_8] = "";
  entity_0 = NULL;
  char* entity_5;
  memset(entity_0, 'A', entity_8-1);
  entity_0[entity_8-1]='';
  entity_5 = (char*)malloc(22*sizeof(char));
  entity_5[22-1]='';
  entity_8 = 42;
  strcpy(entity_5, entity_0);
}