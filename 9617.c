void fun()
{
  int entity_1 = 29;
  char entity_0[83] = "";
  entity_0 = NULL;
  char* entity_2;
  memset(entity_0, 'E', 83-1);
  entity_0[83-1]='';
  entity_2 = (char*)malloc(64*sizeof(char));
  entity_2[64-1]='';
  entity_0[entity_1] = 'y';
}