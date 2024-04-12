void fun()
{
  int entity_0 = 20;
  char entity_9[entity_0] = "";
  entity_9 = NULL;
  char entity_6[84] = "";
  entity_6 = NULL;
  char* entity_2;
  char entity_7 = 'd';
  entity_2 = (char*)malloc(98*sizeof(char));
  entity_2[98-1]='';
  memset(entity_9, 'J', entity_0-1);
  entity_9[entity_0-1]='';
  memset(entity_6, 'T', 84-1);
  entity_6[84-1]='';
  strcpy(entity_2, entity_9);
}