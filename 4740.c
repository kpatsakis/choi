void fun()
{
  int entity_7 = 12;
  int entity_1 = 12;
  char entity_2[50] = "";
  entity_2 = NULL;
  char entity_5 = 'p';
  char* entity_0;
  char entity_9[93] = "";
  entity_9 = NULL;
  memset(entity_9, 'j', 93-1);
  entity_9[93-1]='';
  memset(entity_2, 'N', 50-1);
  entity_2[50-1]='';
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[entity_7-1]='';
  strcpy(entity_0, entity_2);
}