void fun()
{
  int entity_4 = 21;
  char entity_3[88] = "";
  entity_3 = NULL;
  char* entity_9;
  char entity_8 = 'w';
  entity_9 = (char*)malloc(entity_4*sizeof(char));
  entity_9[entity_4-1]='';
  memset(entity_3, 'A', 88-1);
  entity_3[88-1]='';
  strcpy(entity_9, entity_3);
}