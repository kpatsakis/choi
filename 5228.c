void fun()
{
  int entity_3 = 78;
  int entity_0 = 11;
  entity_3 = 78;
  char* entity_6;
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  memset(entity_5, 'D', entity_3-1);
  entity_5[entity_3-1]='';
  entity_6 = (char*)malloc(98*sizeof(char));
  entity_6[98-1]='';
  strcpy(entity_6, entity_5);
}