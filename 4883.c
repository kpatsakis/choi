void fun()
{
  int entity_5 = 7;
  entity_5 = 7;
  char* entity_2;
  char entity_3[29] = "";
  entity_3 = NULL;
  char entity_1 = 'Z';
  char* entity_9;
  char entity_0[entity_5] = "";
  entity_0 = NULL;
  entity_2 = (char*)malloc(9*sizeof(char));
  entity_2[9-1]='';
  memset(entity_3, 'U', 29-1);
  entity_3[29-1]='';
  memset(entity_0, 'j', entity_5-1);
  entity_0[entity_5-1]='';
  entity_9 = (char*)malloc(98*sizeof(char));
  entity_9[98-1]='';
  strcpy(entity_9, entity_0);
}