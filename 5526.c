void fun()
{
  int entity_6 = 29;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(97*sizeof(char));
  entity_9[97-1]='';
  memset(entity_5, 'g', entity_6-1);
  entity_5[entity_6-1]='';
  strcpy(entity_9, entity_5);
}