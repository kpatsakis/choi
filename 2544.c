void fun()
{
  int entity_2 = 48;
  entity_2 = 75;
  char entity_0[entity_2] = "";
  entity_0 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(37*sizeof(char));
  entity_4[37-1]='';
  memset(entity_0, 'B', entity_2-1);
  entity_0[entity_2-1]='';
  entity_0[86] = 'M';
}