void fun()
{
  int entity_9 = 52;
  char entity_6[29] = "";
  entity_6 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[entity_9-1]='';
  memset(entity_6, 'c', 29-1);
  entity_6[29-1]='';
  strcpy(entity_2, entity_6);
}