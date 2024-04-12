void fun()
{
  int entity_7 = 81;
  char* entity_8;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  memset(entity_5, 'R', entity_7-1);
  entity_5[entity_7-1]='';
  entity_8 = (char*)malloc(42*sizeof(char));
  entity_8[42-1]='';
  strcpy(entity_8, entity_5);
}