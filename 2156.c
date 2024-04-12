void fun()
{
  int entity_4 = 87;
  int entity_7 = 75;
  char entity_2[entity_7] = "";
  entity_2 = NULL;
  char* entity_6;
  char entity_1 = 'p';
  entity_6 = (char*)malloc(40*sizeof(char));
  entity_6[40-1]='';
  memset(entity_2, 'P', entity_7-1);
  entity_2[entity_7-1]='';
  strcpy(entity_6, entity_2);
}