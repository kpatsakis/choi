void fun()
{
  int entity_1 = 97;
  char entity_2[30] = "";
  entity_2 = NULL;
  char entity_0[1] = "";
  entity_0 = NULL;
  char* entity_8;
  char entity_6[10] = "";
  entity_6 = NULL;
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[entity_1-1]='';
  memset(entity_2, 'P', 30-1);
  entity_2[30-1]='';
  memset(entity_0, 'h', 1-1);
  entity_0[1-1]='';
  memset(entity_6, 'b', 10-1);
  entity_6[10-1]='';
  memcpy(entity_8, entity_0, 1*sizeof(char));
}