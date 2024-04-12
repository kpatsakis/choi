void fun()
{
  int entity_4 = 86;
  entity_4 = 9;
  char* entity_0;
  char* entity_8;
  char entity_1[entity_4] = "";
  entity_1 = NULL;
  entity_8 = (char*)malloc(69*sizeof(char));
  entity_8[69-1]='';
  entity_0 = (char*)malloc(19*sizeof(char));
  entity_0[19-1]='';
  memset(entity_1, 'b', entity_4-1);
  entity_1[entity_4-1]='';
  memcpy(entity_8, entity_1, entity_4*sizeof(char));
}