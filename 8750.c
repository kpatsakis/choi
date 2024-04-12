void fun()
{
  int entity_2 = 58;
  char entity_5[98] = "";
  entity_5 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[entity_2-1]='';
  memset(entity_5, 'S', 98-1);
  entity_5[98-1]='';
  strcpy(entity_6, entity_5);
}