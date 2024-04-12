void fun()
{
  int entity_0 = 67;
  int entity_7 = 27;
  char* entity_2;
  char entity_5[31] = "";
  entity_5 = NULL;
  memset(entity_5, 'B', 31-1);
  entity_5[31-1]='';
  entity_2 = (char*)malloc(entity_7*sizeof(char));
  entity_2[entity_7-1]='';
  strcpy(entity_2, entity_5);
}