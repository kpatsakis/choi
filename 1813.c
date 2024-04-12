void fun()
{
  int entity_5 = 97;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  char* entity_4;
  memset(entity_1, 'R', entity_5-1);
  entity_1[entity_5-1]='';
  entity_4 = (char*)malloc(69*sizeof(char));
  entity_4[69-1]='';
  strcpy(entity_4, entity_1);
}