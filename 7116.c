void fun()
{
  int entity_2 = 81;
  char entity_3[4] = "";
  entity_3 = NULL;
  char entity_1[entity_2] = "";
  entity_1 = NULL;
  char* entity_4;
  memset(entity_1, 'F', entity_2-1);
  entity_1[entity_2-1]='';
  memset(entity_3, 'p', 4-1);
  entity_3[4-1]='';
  entity_4 = (char*)malloc(69*sizeof(char));
  entity_4[69-1]='';
  strcpy(entity_4, entity_1);
}