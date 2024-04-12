void fun()
{
  int entity_6 = 12;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(42*sizeof(char));
  entity_4[42-1]='';
  memset(entity_5, 'x', entity_6-1);
  entity_5[entity_6-1]='';
  entity_6 = 4;
  memcpy(entity_4, entity_5, entity_6*sizeof(char));
}