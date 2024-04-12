void fun()
{
  int entity_4 = 13;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  char entity_3[40] = "";
  entity_3 = NULL;
  char* entity_1;
  memset(entity_9, 'e', entity_4-1);
  entity_9[entity_4-1]='';
  memset(entity_3, 'v', 40-1);
  entity_3[40-1]='';
  entity_1 = (char*)malloc(99*sizeof(char));
  entity_1[99-1]='';
  strcpy(entity_1, entity_9);
}