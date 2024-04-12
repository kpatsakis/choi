void fun()
{
  int entity_3 = 65;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(83*sizeof(char));
  entity_6[83-1]='';
  memset(entity_0, 'd', entity_3-1);
  entity_0[entity_3-1]='';
  entity_0[84] = 'W';
}