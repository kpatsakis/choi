void fun()
{
  int entity_4 = 46;
  entity_4 = 76;
  char entity_0[59] = "";
  entity_0 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  memset(entity_0, 'h', 59-1);
  entity_0[59-1]='';
  strcpy(entity_2, entity_0);
}