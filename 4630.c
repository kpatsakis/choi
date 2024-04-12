void fun()
{
  int entity_8 = 63;
  entity_8 = 63;
  char entity_5 = 's';
  char* entity_0;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  entity_0 = (char*)malloc(56*sizeof(char));
  entity_0[56-1]='';
  memset(entity_2, 'z', entity_8-1);
  entity_2[entity_8-1]='';
  strcpy(entity_0, entity_2);
}