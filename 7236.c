void fun()
{
  int entity_8 = 6;
  char entity_0[6] = "";
  entity_0 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(11*sizeof(char));
  entity_4[11-1]='';
  memset(entity_0, 'l', 6-1);
  entity_0[6-1]='';
  entity_8 = 41;
  entity_0[entity_8] = 'l';
}