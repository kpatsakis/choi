void fun()
{
  int entity_2 = 1;
  char entity_8[entity_2] = "";
  entity_8 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(53*sizeof(char));
  entity_1[53-1]='';
  memset(entity_8, 'x', entity_2-1);
  entity_8[entity_2-1]='';
  entity_8[73] = 'i';
}