void fun()
{
  int entity_7 = 21;
  char entity_0[entity_7] = "";
  entity_0 = NULL;
  char* entity_2;
  memset(entity_0, 'D', entity_7-1);
  entity_0[entity_7-1]='';
  entity_2 = (char*)malloc(66*sizeof(char));
  entity_2[66-1]='';
  strcpy(entity_2, entity_0);
}