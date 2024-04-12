void fun()
{
  int entity_5 = 91;
  char entity_0[59] = "";
  entity_0 = NULL;
  char entity_1[51] = "";
  entity_1 = NULL;
  char* entity_6;
  memset(entity_0, 'n', 59-1);
  entity_0[59-1]='';
  memset(entity_1, 'r', 51-1);
  entity_1[51-1]='';
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[entity_5-1]='';
  memcpy(entity_6, entity_1, 51*sizeof(char));
}