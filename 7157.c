void fun()
{
  int entity_7 = 54;
  int entity_6 = 13;
  char* entity_0;
  char entity_5[69] = "";
  entity_5 = NULL;
  memset(entity_5, 'A', 69-1);
  entity_5[69-1]='';
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[entity_7-1]='';
  strcpy(entity_0, entity_5);
}