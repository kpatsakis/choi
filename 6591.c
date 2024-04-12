void fun()
{
  int entity_7 = 91;
  char entity_2[98] = "";
  entity_2 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_7*sizeof(char));
  entity_4[entity_7-1]='';
  memset(entity_2, 'S', 98-1);
  entity_2[98-1]='';
  strcpy(entity_4, entity_2);
}