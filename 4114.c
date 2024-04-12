void fun()
{
  int entity_3 = 51;
  int entity_5 = 24;
  char* entity_8;
  char entity_9[70] = "";
  entity_9 = NULL;
  memset(entity_9, 'R', 70-1);
  entity_9[70-1]='';
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[entity_3-1]='';
  memcpy(entity_8, entity_9, 70*sizeof(char));
}