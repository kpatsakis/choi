void fun()
{
  int entity_1 = 72;
  char entity_3[88] = "";
  entity_3 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[entity_1-1]='';
  memset(entity_3, 'b', 88-1);
  entity_3[88-1]='';
  strcpy(entity_0, entity_3);
}