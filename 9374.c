void fun()
{
  int entity_0 = 71;
  char entity_2 = 'b';
  char* entity_7;
  char entity_1[37] = "";
  entity_1 = NULL;
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  memset(entity_1, 'b', 37-1);
  entity_1[37-1]='';
  memset(entity_6, 'h', entity_0-1);
  entity_6[entity_0-1]='';
  entity_7 = (char*)malloc(82*sizeof(char));
  entity_7[82-1]='';
  memcpy(entity_7, entity_6, entity_0*sizeof(char));
}