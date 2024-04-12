void fun()
{
  int entity_6 = 77;
  entity_6 = 77;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(74*sizeof(char));
  entity_5[74-1]='';
  memset(entity_4, 'b', entity_6-1);
  entity_4[entity_6-1]='';
  strcpy(entity_5, entity_4);
}