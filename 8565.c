void fun()
{
  int entity_1 = 41;
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  char entity_3[72] = "";
  entity_3 = NULL;
  char* entity_5;
  memset(entity_3, 'E', 72-1);
  entity_3[72-1]='';
  entity_5 = (char*)malloc(83*sizeof(char));
  entity_5[83-1]='';
  memset(entity_8, 'O', entity_1-1);
  entity_8[entity_1-1]='';
  entity_1 = 14;
  strcpy(entity_5, entity_8);
}