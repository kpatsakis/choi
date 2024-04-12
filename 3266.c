void fun()
{
  int entity_6 = 24;
  char entity_2[10] = "";
  entity_2 = NULL;
  char* entity_5;
  memset(entity_2, 'H', 10-1);
  entity_2[10-1]='';
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[entity_6-1]='';
  strcpy(entity_5, entity_2);
}