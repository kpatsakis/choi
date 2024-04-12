void fun()
{
  int entity_7 = 88;
  entity_7 = 88;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(10*sizeof(char));
  entity_1[10-1]='';
  memset(entity_8, 'k', entity_7-1);
  entity_8[entity_7-1]='';
  strcpy(entity_1, entity_8);
}