void fun()
{
  int entity_7 = 94;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  char* entity_1;
  memset(entity_5, 'w', entity_7-1);
  entity_5[entity_7-1]='';
  entity_1 = (char*)malloc(97*sizeof(char));
  entity_1[97-1]='';
  entity_7 = 12;
  strcpy(entity_1, entity_5);
}