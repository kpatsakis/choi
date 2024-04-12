void fun()
{
  int entity_3 = 5;
  char entity_0[20] = "";
  entity_0 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[entity_3-1]='';
  memset(entity_0, 'Q', 20-1);
  entity_0[20-1]='';
  strcpy(entity_2, entity_0);
}