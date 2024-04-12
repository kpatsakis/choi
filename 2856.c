void fun()
{
  int entity_8 = 34;
  entity_8 = 34;
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  char* entity_7;
  char* entity_1;
  entity_1 = (char*)malloc(55*sizeof(char));
  entity_1[55-1]='';
  entity_7 = (char*)malloc(69*sizeof(char));
  entity_7[69-1]='';
  memset(entity_3, 'K', entity_8-1);
  entity_3[entity_8-1]='';
  strcpy(entity_7, entity_3);
}