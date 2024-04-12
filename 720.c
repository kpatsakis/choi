void fun()
{
  int entity_6 = 71;
  char* entity_0;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  entity_0 = (char*)malloc(2*sizeof(char));
  entity_0[2-1]='';
  memset(entity_2, 'c', entity_6-1);
  entity_2[entity_6-1]='';
  entity_6 = 80;
  strcpy(entity_0, entity_2);
}