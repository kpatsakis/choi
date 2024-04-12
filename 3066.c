void fun()
{
  int entity_8 = 72;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  char entity_5 = 'k';
  char* entity_4;
  entity_4 = (char*)malloc(69*sizeof(char));
  entity_4[69-1]='';
  memset(entity_1, 'R', entity_8-1);
  entity_1[entity_8-1]='';
  strcpy(entity_4, entity_1);
}