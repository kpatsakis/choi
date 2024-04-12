void fun()
{
  int entity_5 = 18;
  char* entity_8;
  char entity_0[25] = "";
  entity_0 = NULL;
  memset(entity_0, 'n', 25-1);
  entity_0[25-1]='';
  entity_8 = (char*)malloc(84*sizeof(char));
  entity_8[84-1]='';
  entity_0[entity_5] = 'x';
}