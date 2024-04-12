void fun()
{
  int entity_2 = 50;
  int entity_3 = 50;
  entity_3 = 11;
  char* entity_0;
  char entity_1 = 'C';
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  memset(entity_8, 'z', entity_3-1);
  entity_8[entity_3-1]='';
  entity_0 = (char*)malloc(81*sizeof(char));
  entity_0[81-1]='';
  entity_8[98] = 'Z';
}