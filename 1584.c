void fun()
{
  int entity_2 = 32;
  entity_2 = 32;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  char* entity_1;
  char* entity_4;
  memset(entity_5, 'x', entity_2-1);
  entity_5[entity_2-1]='';
  entity_4 = (char*)malloc(3*sizeof(char));
  entity_4[3-1]='';
  entity_1 = (char*)malloc(81*sizeof(char));
  entity_1[81-1]='';
  strcpy(entity_1, entity_5);
}