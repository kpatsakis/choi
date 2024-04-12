void fun()
{
  int entity_2 = 3;
  char* entity_7;
  char* entity_9;
  char entity_0[15] = "";
  entity_0 = NULL;
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[entity_2-1]='';
  entity_9 = (char*)malloc(99*sizeof(char));
  entity_9[99-1]='';
  memset(entity_0, 'R', 15-1);
  entity_0[15-1]='';
  entity_2 = 69;
  strcpy(entity_7, entity_0);
}