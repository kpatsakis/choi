void fun()
{
  int entity_2 = 92;
  char entity_0[93] = "";
  entity_0 = NULL;
  char* entity_7;
  memset(entity_0, 'T', 93-1);
  entity_0[93-1]='';
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[entity_2-1]='';
  entity_2 = 74;
  strcpy(entity_7, entity_0);
}