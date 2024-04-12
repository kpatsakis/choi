void fun()
{
  int entity_5 = 47;
  char* entity_1;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  char entity_7 = 'w';
  entity_1 = (char*)malloc(61*sizeof(char));
  entity_1[61-1]='';
  memset(entity_2, 'n', entity_5-1);
  entity_2[entity_5-1]='';
  strcpy(entity_1, entity_2);
}