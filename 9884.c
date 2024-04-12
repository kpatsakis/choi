void fun()
{
  int entity_4 = 34;
  entity_4 = 55;
  char* entity_6;
  char entity_5[60] = "";
  entity_5 = NULL;
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  memset(entity_5, 'd', 60-1);
  entity_5[60-1]='';
  strcpy(entity_6, entity_5);
}