void fun()
{
  int entity_4 = 31;
  entity_4 = 31;
  char* entity_0;
  char* entity_5;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  memset(entity_6, 'J', entity_4-1);
  entity_6[entity_4-1]='';
  entity_0 = (char*)malloc(7*sizeof(char));
  entity_0[7-1]='';
  entity_5 = (char*)malloc(80*sizeof(char));
  entity_5[80-1]='';
  strcpy(entity_0, entity_6);
}