void fun()
{
  int entity_1 = 91;
  char entity_0[45] = "";
  entity_0 = NULL;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  char entity_5 = 'a';
  char entity_9 = 's';
  char* entity_3;
  memset(entity_2, 's', entity_1-1);
  entity_2[entity_1-1]='';
  entity_3 = (char*)malloc(78*sizeof(char));
  entity_3[78-1]='';
  memset(entity_0, 'e', 45-1);
  entity_0[45-1]='';
  entity_1 = 11;
  strcpy(entity_3, entity_2);
}