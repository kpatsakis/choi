void fun()
{
  int entity_3 = 87;
  char* entity_4;
  char entity_9[61] = "";
  entity_9 = NULL;
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  memset(entity_9, 'm', 61-1);
  entity_9[61-1]='';
  strcpy(entity_4, entity_9);
}