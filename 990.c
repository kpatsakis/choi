void fun()
{
  int entity_2 = 13;
  char* entity_4;
  char entity_1[33] = "";
  entity_1 = NULL;
  entity_4 = (char*)malloc(entity_2*sizeof(char));
  entity_4[entity_2-1]='';
  memset(entity_1, 'M', 33-1);
  entity_1[33-1]='';
  entity_2 = 43;
  strcpy(entity_4, entity_1);
}