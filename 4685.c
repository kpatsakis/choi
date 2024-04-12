void fun()
{
  int entity_3 = 13;
  int entity_7 = 69;
  char entity_1 = 'U';
  char entity_0[54] = "";
  entity_0 = NULL;
  char* entity_5;
  memset(entity_0, 'c', 54-1);
  entity_0[54-1]='';
  entity_5 = (char*)malloc(28*sizeof(char));
  entity_5[28-1]='';
  memcpy(entity_5, entity_0, 54*sizeof(char));
}