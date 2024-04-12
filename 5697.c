void fun()
{
  int entity_0 = 80;
  char* entity_5;
  char* entity_9;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  char entity_7 = 'p';
  entity_5 = (char*)malloc(99*sizeof(char));
  entity_5[99-1]='';
  entity_9 = (char*)malloc(32*sizeof(char));
  entity_9[32-1]='';
  memset(entity_1, 'A', entity_0-1);
  entity_1[entity_0-1]='';
  strcpy(entity_5, entity_1);
}