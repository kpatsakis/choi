void fun()
{
  int entity_4 = 11;
  int entity_6 = 33;
  char* entity_5;
  char entity_1[57] = "";
  entity_1 = NULL;
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[entity_6-1]='';
  memset(entity_1, 'N', 57-1);
  entity_1[57-1]='';
  strcpy(entity_5, entity_1);
}