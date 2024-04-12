void fun()
{
  int entity_1 = 29;
  char entity_6 = 'M';
  char* entity_4;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  entity_4 = (char*)malloc(40*sizeof(char));
  entity_4[40-1]='';
  memset(entity_5, 'd', entity_1-1);
  entity_5[entity_1-1]='';
  strcpy(entity_4, entity_5);
}