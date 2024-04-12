void fun()
{
  int entity_2 = 96;
  char* entity_7;
  char entity_0[0] = "";
  entity_0 = NULL;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  memset(entity_4, 'J', entity_2-1);
  entity_4[entity_2-1]='';
  memset(entity_0, 'd', 0-1);
  entity_0[0-1]='';
  entity_7 = (char*)malloc(3*sizeof(char));
  entity_7[3-1]='';
  strcpy(entity_7, entity_4);
}