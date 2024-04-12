void fun()
{
  int entity_2 = 33;
  char entity_9 = 'C';
  char entity_5[86] = "";
  entity_5 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[entity_2-1]='';
  memset(entity_5, 't', 86-1);
  entity_5[86-1]='';
  strcpy(entity_6, entity_5);
}