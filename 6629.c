void fun()
{
  int entity_3 = 36;
  int entity_7 = 98;
  char entity_0[62] = "";
  entity_0 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_3*sizeof(char));
  entity_9[entity_3-1]='';
  memset(entity_0, 'd', 62-1);
  entity_0[62-1]='';
  memcpy(entity_9, entity_0, 62*sizeof(char));
}