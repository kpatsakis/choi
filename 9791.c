void fun()
{
  int entity_7 = 21;
  int entity_8 = 1;
  char entity_3 = 'v';
  char entity_9[96] = "";
  entity_9 = NULL;
  char* entity_2;
  char entity_1[entity_7] = "";
  entity_1 = NULL;
  entity_2 = (char*)malloc(99*sizeof(char));
  entity_2[99-1]='';
  memset(entity_1, 'J', entity_7-1);
  entity_1[entity_7-1]='';
  memset(entity_9, 'i', 96-1);
  entity_9[96-1]='';
  strcpy(entity_2, entity_1);
}