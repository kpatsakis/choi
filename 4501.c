void fun()
{
  int entity_6 = 32;
  char* entity_2;
  char entity_0[entity_6] = "";
  entity_0 = NULL;
  entity_2 = (char*)malloc(51*sizeof(char));
  entity_2[51-1]='';
  memset(entity_0, 'r', entity_6-1);
  entity_0[entity_6-1]='';
  entity_6 = 67;
  strcpy(entity_2, entity_0);
}