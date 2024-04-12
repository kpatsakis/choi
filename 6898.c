void fun()
{
  int entity_1 = 88;
  int entity_7 = 97;
  char* entity_8;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  memset(entity_5, 'V', entity_7-1);
  entity_5[entity_7-1]='';
  entity_8 = (char*)malloc(32*sizeof(char));
  entity_8[32-1]='';
  entity_7 = 31;
  strcpy(entity_8, entity_5);
}