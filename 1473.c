void fun()
{
  int entity_3 = 91;
  char* entity_8;
  char entity_9[49] = "";
  entity_9 = NULL;
  char entity_1 = 'D';
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[entity_3-1]='';
  memset(entity_9, 'C', 49-1);
  entity_9[49-1]='';
  memcpy(entity_8, entity_9, 49*sizeof(char));
}