void fun()
{
  int entity_4 = 96;
  char* entity_1;
  char entity_0[34] = "";
  entity_0 = NULL;
  entity_1 = (char*)malloc(31*sizeof(char));
  entity_1[31-1]='';
  memset(entity_0, 'U', 34-1);
  entity_0[34-1]='';
  entity_0[entity_4] = 'R';
}