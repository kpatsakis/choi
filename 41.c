void fun()
{
  int entity_9 = 35;
  int entity_0 = 73;
  char entity_8 = 'j';
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  char* entity_3;
  memset(entity_4, 'm', entity_0-1);
  entity_4[entity_0-1]='';
  entity_3 = (char*)malloc(69*sizeof(char));
  entity_3[69-1]='';
  entity_0 = 14;
  memcpy(entity_3, entity_4, entity_0*sizeof(char));
}