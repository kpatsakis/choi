void fun()
{
  int entity_2 = 35;
  entity_2 = 35;
  char* entity_4;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  memset(entity_6, 'U', entity_2-1);
  entity_6[entity_2-1]='';
  entity_4 = (char*)malloc(42*sizeof(char));
  entity_4[42-1]='';
  strcpy(entity_4, entity_6);
}