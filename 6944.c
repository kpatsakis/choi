void fun()
{
  int entity_5 = 76;
  entity_5 = 83;
  char* entity_0;
  char entity_2[46] = "";
  entity_2 = NULL;
  char entity_3 = 'v';
  memset(entity_2, 's', 46-1);
  entity_2[46-1]='';
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  strcpy(entity_0, entity_2);
}