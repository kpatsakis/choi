void fun()
{
  int entity_2 = 7;
  char entity_3[1] = "";
  entity_3 = NULL;
  char* entity_9;
  char* entity_0;
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[entity_2-1]='';
  entity_9 = (char*)malloc(8*sizeof(char));
  entity_9[8-1]='';
  memset(entity_3, 'L', 1-1);
  entity_3[1-1]='';
  strcpy(entity_0, entity_3);
}