void fun()
{
  int entity_4 = 40;
  char entity_0[46] = "";
  entity_0 = NULL;
  char* entity_2;
  memset(entity_0, 'j', 46-1);
  entity_0[46-1]='';
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  entity_4 = 93;
  strcpy(entity_2, entity_0);
}