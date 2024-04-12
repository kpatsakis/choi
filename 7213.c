void fun()
{
  int entity_4 = 1;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(43*sizeof(char));
  entity_9[43-1]='';
  memset(entity_3, 'J', entity_4-1);
  entity_3[entity_4-1]='';
  strcpy(entity_9, entity_3);
}