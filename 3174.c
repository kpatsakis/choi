void fun()
{
  int entity_4 = 2;
  char entity_8[entity_4] = "";
  entity_8 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(0*sizeof(char));
  entity_1[0-1]='';
  memset(entity_8, 'K', entity_4-1);
  entity_8[entity_4-1]='';
  entity_8[90] = 'r';
}