void fun()
{
  int entity_2 = 71;
  char* entity_3;
  char entity_0[98] = "";
  entity_0 = NULL;
  memset(entity_0, 'f', 98-1);
  entity_0[98-1]='';
  entity_3 = (char*)malloc(60*sizeof(char));
  entity_3[60-1]='';
  memcpy(entity_3, entity_0, 98*sizeof(char));
}