void fun()
{
  int entity_9 = 98;
  char* entity_0;
  char entity_2[80] = "";
  entity_2 = NULL;
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[entity_9-1]='';
  memset(entity_2, 'l', 80-1);
  entity_2[80-1]='';
  entity_9 = 66;
  strcpy(entity_0, entity_2);
}