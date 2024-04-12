void fun()
{
  int entity_3 = 4;
  char* entity_4;
  char entity_6[9] = "";
  entity_6 = NULL;
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  memset(entity_6, 'x', 9-1);
  entity_6[9-1]='';
  entity_3 = 59;
  strcpy(entity_4, entity_6);
}