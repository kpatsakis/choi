void fun()
{
  int entity_3 = 98;
  int entity_7 = 31;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  char* entity_4;
  memset(entity_1, 'i', entity_3-1);
  entity_1[entity_3-1]='';
  entity_4 = (char*)malloc(42*sizeof(char));
  entity_4[42-1]='';
  strcpy(entity_4, entity_1);
}