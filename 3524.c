void fun()
{
  int entity_1 = 67;
  char entity_0[51] = "";
  entity_0 = NULL;
  char* entity_3;
  memset(entity_0, 'x', 51-1);
  entity_0[51-1]='';
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[entity_1-1]='';
  memcpy(entity_3, entity_0, 51*sizeof(char));
}