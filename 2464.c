void fun()
{
  int entity_8 = 7;
  char entity_2[51] = "";
  entity_2 = NULL;
  char* entity_0;
  memset(entity_2, 'M', 51-1);
  entity_2[51-1]='';
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[entity_8-1]='';
  strcpy(entity_0, entity_2);
}