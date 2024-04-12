void fun()
{
  int entity_4 = 5;
  char entity_9[7] = "";
  entity_9 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  memset(entity_9, 'G', 7-1);
  entity_9[7-1]='';
  strcpy(entity_2, entity_9);
}