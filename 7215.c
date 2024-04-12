void fun()
{
  int entity_4 = 11;
  int entity_5 = 33;
  char* entity_0;
  char* entity_8;
  char entity_3[42] = "";
  entity_3 = NULL;
  char entity_9[7] = "";
  entity_9 = NULL;
  entity_8 = (char*)malloc(82*sizeof(char));
  entity_8[82-1]='';
  memset(entity_9, 'y', 7-1);
  entity_9[7-1]='';
  memset(entity_3, 'Y', 42-1);
  entity_3[42-1]='';
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  memcpy(entity_0, entity_9, 7*sizeof(char));
}