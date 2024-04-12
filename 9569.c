void fun()
{
  int entity_5 = 60;
  char entity_7[99] = "";
  entity_7 = NULL;
  char* entity_6;
  char entity_1[1] = "";
  entity_1 = NULL;
  memset(entity_7, 'w', 99-1);
  entity_7[99-1]='';
  memset(entity_1, 'Q', 1-1);
  entity_1[1-1]='';
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[entity_5-1]='';
  entity_5 = 2;
  strcpy(entity_6, entity_1);
}