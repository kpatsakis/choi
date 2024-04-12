void fun()
{
  int entity_3 = 74;
  char* entity_5;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  memset(entity_1, 'P', entity_3-1);
  entity_1[entity_3-1]='';
  entity_5 = (char*)malloc(66*sizeof(char));
  entity_5[66-1]='';
  strcpy(entity_5, entity_1);
}