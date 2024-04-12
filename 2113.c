void fun()
{
  int entity_6 = 49;
  char entity_8[entity_6] = "";
  entity_8 = NULL;
  char* entity_5;
  memset(entity_8, 'y', entity_6-1);
  entity_8[entity_6-1]='';
  entity_5 = (char*)malloc(81*sizeof(char));
  entity_5[81-1]='';
  strcpy(entity_5, entity_8);
}