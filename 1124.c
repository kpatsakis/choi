void fun()
{
  int entity_4 = 95;
  char entity_0[entity_4] = "";
  entity_0 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(33*sizeof(char));
  entity_2[33-1]='';
  memset(entity_0, 's', entity_4-1);
  entity_0[entity_4-1]='';
  strcpy(entity_2, entity_0);
}