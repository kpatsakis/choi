void fun()
{
  int entity_3 = 21;
  int entity_8 = 49;
  entity_3 = 51;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(85*sizeof(char));
  entity_9[85-1]='';
  memset(entity_1, 'x', entity_3-1);
  entity_1[entity_3-1]='';
  entity_1[77] = 'K';
}