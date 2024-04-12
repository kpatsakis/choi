void fun()
{
  int entity_3 = 45;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  char* entity_5;
  memset(entity_1, 'Q', entity_3-1);
  entity_1[entity_3-1]='';
  entity_5 = (char*)malloc(78*sizeof(char));
  entity_5[78-1]='';
  strcpy(entity_5, entity_1);
}