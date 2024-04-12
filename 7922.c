void fun()
{
  int entity_6 = 95;
  entity_6 = 95;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(37*sizeof(char));
  entity_7[37-1]='';
  memset(entity_5, 'd', entity_6-1);
  entity_5[entity_6-1]='';
  strcpy(entity_7, entity_5);
}