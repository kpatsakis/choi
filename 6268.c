void fun()
{
  int entity_4 = 80;
  char* entity_6;
  char entity_8[entity_4] = "";
  entity_8 = NULL;
  memset(entity_8, 'x', entity_4-1);
  entity_8[entity_4-1]='';
  entity_6 = (char*)malloc(3*sizeof(char));
  entity_6[3-1]='';
  entity_8[88] = 'c';
}