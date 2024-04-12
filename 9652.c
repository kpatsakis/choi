void fun()
{
  int entity_4 = 77;
  int entity_2 = 13;
  entity_4 = 18;
  char entity_8[31] = "";
  entity_8 = NULL;
  char* entity_9;
  memset(entity_8, 'w', 31-1);
  entity_8[31-1]='';
  entity_9 = (char*)malloc(entity_4*sizeof(char));
  entity_9[entity_4-1]='';
  strcpy(entity_9, entity_8);
}