void fun()
{
  int entity_9 = 72;
  int entity_4 = 20;
  int entity_0 = 11;
  char entity_8[entity_4] = "";
  entity_8 = NULL;
  char* entity_3;
  memset(entity_8, 'd', entity_4-1);
  entity_8[entity_4-1]='';
  entity_3 = (char*)malloc(43*sizeof(char));
  entity_3[43-1]='';
  entity_4 = 16;
  memcpy(entity_3, entity_8, entity_4*sizeof(char));
}