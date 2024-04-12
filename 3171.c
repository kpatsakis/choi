void fun()
{
  int entity_5 = 42;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  char* entity_6;
  memset(entity_1, 'd', entity_5-1);
  entity_1[entity_5-1]='';
  entity_6 = (char*)malloc(69*sizeof(char));
  entity_6[69-1]='';
  strcpy(entity_6, entity_1);
}