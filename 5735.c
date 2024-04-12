void fun()
{
  int entity_7 = 98;
  char entity_9[6] = "";
  entity_9 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[entity_7-1]='';
  memset(entity_9, 'b', 6-1);
  entity_9[6-1]='';
  entity_7 = 75;
  strcpy(entity_3, entity_9);
}