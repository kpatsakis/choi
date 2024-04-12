void fun()
{
  int entity_4 = 71;
  entity_4 = 20;
  char* entity_2;
  char entity_9[90] = "";
  entity_9 = NULL;
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  memset(entity_9, 'u', 90-1);
  entity_9[90-1]='';
  strcpy(entity_2, entity_9);
}