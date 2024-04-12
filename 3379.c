void fun()
{
  int entity_3 = 37;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(71*sizeof(char));
  entity_6[71-1]='';
  memset(entity_0, 'z', entity_3-1);
  entity_0[entity_3-1]='';
  entity_3 = 24;
  strcpy(entity_6, entity_0);
}