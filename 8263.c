void fun()
{
  int entity_7 = 70;
  char entity_0[entity_7] = "";
  entity_0 = NULL;
  char* entity_2;
  memset(entity_0, 'K', entity_7-1);
  entity_0[entity_7-1]='';
  entity_2 = (char*)malloc(45*sizeof(char));
  entity_2[45-1]='';
  strcpy(entity_2, entity_0);
}