void fun()
{
  int entity_7 = 54;
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  char* entity_0;
  char entity_9[11] = "";
  entity_9 = NULL;
  memset(entity_9, 'e', 11-1);
  entity_9[11-1]='';
  memset(entity_3, 'S', entity_7-1);
  entity_3[entity_7-1]='';
  entity_0 = (char*)malloc(78*sizeof(char));
  entity_0[78-1]='';
  entity_7 = 62;
  strcpy(entity_0, entity_3);
}