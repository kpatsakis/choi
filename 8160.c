void fun()
{
  int entity_0 = 32;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  char* entity_6;
  memset(entity_2, 'R', entity_0-1);
  entity_2[entity_0-1]='';
  entity_6 = (char*)malloc(32*sizeof(char));
  entity_6[32-1]='';
  strcpy(entity_6, entity_2);
}