void fun()
{
  int entity_6 = 72;
  entity_6 = 95;
  char entity_2[98] = "";
  entity_2 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[entity_6-1]='';
  memset(entity_2, 'u', 98-1);
  entity_2[98-1]='';
  strcpy(entity_1, entity_2);
}