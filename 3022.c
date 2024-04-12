void fun()
{
  int entity_6 = 67;
  char* entity_5;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  entity_5 = (char*)malloc(69*sizeof(char));
  entity_5[69-1]='';
  memset(entity_4, 'k', entity_6-1);
  entity_4[entity_6-1]='';
  strcpy(entity_5, entity_4);
}