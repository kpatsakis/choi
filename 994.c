void fun()
{
  int entity_3 = 77;
  char* entity_8;
  char entity_9[12] = "";
  entity_9 = NULL;
  memset(entity_9, 'w', 12-1);
  entity_9[12-1]='';
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[entity_3-1]='';
  memcpy(entity_8, entity_9, 12*sizeof(char));
}