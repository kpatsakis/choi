void fun()
{
  int entity_1 = 72;
  int entity_5 = 72;
  entity_5 = 72;
  char entity_7[25] = "";
  entity_7 = NULL;
  char* entity_6;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  entity_6 = (char*)malloc(32*sizeof(char));
  entity_6[32-1]='';
  memset(entity_7, 'l', 25-1);
  entity_7[25-1]='';
  memset(entity_3, 'S', entity_5-1);
  entity_3[entity_5-1]='';
  strcpy(entity_6, entity_3);
}