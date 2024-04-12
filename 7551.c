void fun()
{
  int entity_3 = 26;
  char* entity_2;
  char entity_0[51] = "";
  entity_0 = NULL;
  memset(entity_0, 'o', 51-1);
  entity_0[51-1]='';
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[entity_3-1]='';
  entity_3 = 39;
  strcpy(entity_2, entity_0);
}