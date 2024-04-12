void fun()
{
  int entity_0 = 47;
  int entity_2 = 57;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  char entity_7[80] = "";
  entity_7 = NULL;
  char* entity_4;
  memset(entity_7, 'J', 80-1);
  entity_7[80-1]='';
  entity_4 = (char*)malloc(15*sizeof(char));
  entity_4[15-1]='';
  memset(entity_5, 'P', entity_2-1);
  entity_5[entity_2-1]='';
  strcpy(entity_4, entity_5);
}