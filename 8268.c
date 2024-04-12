void fun()
{
  int entity_4 = 50;
  char* entity_3;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  entity_3 = (char*)malloc(71*sizeof(char));
  entity_3[71-1]='';
  memset(entity_9, 'n', entity_4-1);
  entity_9[entity_4-1]='';
  strcpy(entity_3, entity_9);
}