void fun()
{
  int entity_7 = 37;
  int entity_2 = 80;
  char* entity_9;
  char entity_1 = 'I';
  char entity_0[entity_7] = "";
  entity_0 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(2*sizeof(char));
  entity_5[2-1]='';
  entity_9 = (char*)malloc(38*sizeof(char));
  entity_9[38-1]='';
  memset(entity_0, 'B', entity_7-1);
  entity_0[entity_7-1]='';
  strcpy(entity_5, entity_0);
}