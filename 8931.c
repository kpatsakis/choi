void fun()
{
  int entity_2 = 22;
  char* entity_6;
  char entity_5[88] = "";
  entity_5 = NULL;
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[entity_2-1]='';
  memset(entity_5, 'n', 88-1);
  entity_5[88-1]='';
  entity_2 = 80;
  strcpy(entity_6, entity_5);
}