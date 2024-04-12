void fun()
{
  int entity_8 = 78;
  int entity_1 = 54;
  entity_8 = 78;
  char* entity_5;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  entity_5 = (char*)malloc(98*sizeof(char));
  entity_5[98-1]='';
  memset(entity_6, 'a', entity_8-1);
  entity_6[entity_8-1]='';
  strcpy(entity_5, entity_6);
}