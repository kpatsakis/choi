void fun()
{
  int entity_1 = 24;
  int entity_4 = 10;
  char* entity_3;
  char* entity_9;
  char entity_0[7] = "";
  entity_0 = NULL;
  entity_9 = (char*)malloc(15*sizeof(char));
  entity_9[15-1]='';
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[entity_4-1]='';
  memset(entity_0, 'c', 7-1);
  entity_0[7-1]='';
  entity_4 = 47;
  strcpy(entity_3, entity_0);
}