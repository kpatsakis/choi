void fun()
{
  int entity_0 = 91;
  char entity_5[88] = "";
  entity_5 = NULL;
  char entity_6[59] = "";
  entity_6 = NULL;
  char* entity_3;
  char entity_9 = 'A';
  memset(entity_5, 'U', 88-1);
  entity_5[88-1]='';
  memset(entity_6, 'b', 59-1);
  entity_6[59-1]='';
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[entity_0-1]='';
  entity_0 = 1;
  memcpy(entity_3, entity_5, 88*sizeof(char));
}