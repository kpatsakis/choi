void fun()
{
  int entity_7 = 1;
  char* entity_3;
  char entity_9[98] = "";
  entity_9 = NULL;
  memset(entity_9, 'z', 98-1);
  entity_9[98-1]='';
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[entity_7-1]='';
  strcpy(entity_3, entity_9);
}