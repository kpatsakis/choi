void fun()
{
  int entity_7 = 42;
  int entity_1 = 42;
  char entity_2 = 'r';
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(54*sizeof(char));
  entity_4[54-1]='';
  memset(entity_8, 'V', entity_7-1);
  entity_8[entity_7-1]='';
  strcpy(entity_4, entity_8);
}