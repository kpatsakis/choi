void fun()
{
  int entity_9 = 42;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  char* entity_1;
  char entity_2[4] = "";
  entity_2 = NULL;
  memset(entity_3, 'T', entity_9-1);
  entity_3[entity_9-1]='';
  memset(entity_2, 'B', 4-1);
  entity_2[4-1]='';
  entity_1 = (char*)malloc(54*sizeof(char));
  entity_1[54-1]='';
  entity_3[85] = 'r';
}