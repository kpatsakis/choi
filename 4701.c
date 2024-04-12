void fun()
{
  int entity_9 = 90;
  char entity_4[63] = "";
  entity_4 = NULL;
  char entity_1[77] = "";
  entity_1 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[entity_9-1]='';
  memset(entity_4, 'x', 63-1);
  entity_4[63-1]='';
  memset(entity_1, 'X', 77-1);
  entity_1[77-1]='';
  strcpy(entity_5, entity_4);
}