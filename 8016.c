void fun()
{
  int entity_8 = 51;
  int entity_1 = 82;
  char* entity_3;
  char entity_0[55] = "";
  entity_0 = NULL;
  char entity_9[24] = "";
  entity_9 = NULL;
  memset(entity_9, 'k', 24-1);
  entity_9[24-1]='';
  memset(entity_0, 'E', 55-1);
  entity_0[55-1]='';
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[entity_1-1]='';
  memcpy(entity_3, entity_9, 24*sizeof(char));
}