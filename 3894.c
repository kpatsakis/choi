void fun()
{
  int entity_2 = 24;
  char entity_7[64] = "";
  entity_7 = NULL;
  char* entity_0;
  char entity_4 = 'M';
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[entity_2-1]='';
  memset(entity_7, 'A', 64-1);
  entity_7[64-1]='';
  strcpy(entity_0, entity_7);
}