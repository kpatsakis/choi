void fun()
{
  int entity_3 = 71;
  entity_3 = 71;
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  char* entity_7;
  memset(entity_5, 'Z', entity_3-1);
  entity_5[entity_3-1]='';
  entity_7 = (char*)malloc(53*sizeof(char));
  entity_7[53-1]='';
  strcpy(entity_7, entity_5);
}