void fun()
{
  int entity_3 = 86;
  char* entity_2;
  char entity_0[38] = "";
  entity_0 = NULL;
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[entity_3-1]='';
  memset(entity_0, 'W', 38-1);
  entity_0[38-1]='';
  strcpy(entity_2, entity_0);
}