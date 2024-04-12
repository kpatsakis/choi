void fun()
{
  int entity_3 = 4;
  char* entity_1;
  char entity_0[entity_3] = "";
  memset(entity_0, 'X', entity_3-1);
  entity_0[entity_3-1]='0';
  entity_1 = (char*)malloc(94*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_0);
}