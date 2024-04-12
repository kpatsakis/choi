void fun()
{
  int entity_4 = 1;
  entity_4 = 1;
  char entity_1[entity_4] = "";
  entity_1 = NULL;
  char* entity_7;
  memset(entity_1, 'K', entity_4-1);
  entity_1[entity_4-1]='';
  entity_7 = (char*)malloc(71*sizeof(char));
  entity_7[71-1]='';
  strcpy(entity_7, entity_1);
}