void fun()
{
  int entity_8 = 8;
  char entity_2 = 'c';
  char* entity_0;
  char entity_3[69] = "";
  entity_3 = NULL;
  memset(entity_3, 'B', 69-1);
  entity_3[69-1]='';
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[entity_8-1]='';
  strcpy(entity_0, entity_3);
}