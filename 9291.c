void fun()
{
  int entity_8 = 1;
  char entity_2[42] = "";
  entity_2 = NULL;
  char entity_4[27] = "";
  entity_4 = NULL;
  char* entity_0;
  memset(entity_2, 'K', 42-1);
  entity_2[42-1]='';
  memset(entity_4, 'b', 27-1);
  entity_4[27-1]='';
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[entity_8-1]='';
  memcpy(entity_0, entity_2, 42*sizeof(char));
}