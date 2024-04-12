void fun()
{
  int entity_2 = 8;
  int entity_9 = 84;
  entity_2 = 52;
  char* entity_0;
  char entity_8[31] = "";
  entity_8 = NULL;
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[entity_2-1]='';
  memset(entity_8, 'Y', 31-1);
  entity_8[31-1]='';
  strcpy(entity_0, entity_8);
}