void fun()
{
  int entity_7 = 70;
  char entity_9[entity_7] = "";
  entity_9 = NULL;
  char entity_5 = 'n';
  char* entity_0;
  char* entity_2;
  entity_2 = (char*)malloc(58*sizeof(char));
  entity_2[58-1]='';
  entity_0 = (char*)malloc(99*sizeof(char));
  entity_0[99-1]='';
  memset(entity_9, 'x', entity_7-1);
  entity_9[entity_7-1]='';
  memcpy(entity_2, entity_9, entity_7*sizeof(char));
}