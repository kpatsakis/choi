void fun()
{
  int entity_7 = 75;
  int entity_0 = 5;
  entity_7 = 75;
  char* entity_1;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  entity_1 = (char*)malloc(40*sizeof(char));
  entity_1[40-1]='';
  memset(entity_5, 'Q', entity_7-1);
  entity_5[entity_7-1]='';
  strcpy(entity_1, entity_5);
}