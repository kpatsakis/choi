void fun()
{
  int entity_9 = 42;
  char* entity_1;
  char entity_8[47] = "";
  entity_8 = NULL;
  char entity_3[95] = "";
  entity_3 = NULL;
  char entity_0 = 'U';
  memset(entity_8, 'B', 47-1);
  entity_8[47-1]='';
  memset(entity_3, 'Z', 95-1);
  entity_3[95-1]='';
  entity_1 = (char*)malloc(entity_9*sizeof(char));
  entity_1[entity_9-1]='';
  memcpy(entity_1, entity_3, 95*sizeof(char));
}