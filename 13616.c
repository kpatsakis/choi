void fun()
{
  int entity_8 = 42;
  char* entity_0;
  char entity_5[45] = "";
  memset(entity_5, 'i', 45-1);
  entity_5[45-1]='0';
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[0]='0';
  entity_8 = 84;
  memcpy(entity_0, entity_5, 45*sizeof(char));
}