void fun()
{
  int entity_3 = 19;
  int entity_5 = 84;
  entity_5 = 84;
  char* entity_7;
  char* entity_0;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  memset(entity_2, 'C', entity_5-1);
  entity_2[entity_5-1]='';
  entity_0 = (char*)malloc(60*sizeof(char));
  entity_0[60-1]='';
  entity_7 = (char*)malloc(4*sizeof(char));
  entity_7[4-1]='';
  strcpy(entity_0, entity_2);
}