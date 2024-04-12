void fun()
{
  int entity_9 = 18;
  int entity_5 = 66;
  char entity_3[64] = "";
  entity_3 = NULL;
  char* entity_7;
  memset(entity_3, 'p', 64-1);
  entity_3[64-1]='';
  entity_7 = (char*)malloc(entity_5*sizeof(char));
  entity_7[entity_5-1]='';
  memcpy(entity_7, entity_3, 64*sizeof(char));
}