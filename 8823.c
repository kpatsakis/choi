void fun()
{
  int entity_6 = 8;
  int entity_4 = 39;
  char* entity_3;
  char entity_9[2] = "";
  entity_9 = NULL;
  memset(entity_9, 'k', 2-1);
  entity_9[2-1]='';
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[entity_4-1]='';
  entity_4 = 6;
  memcpy(entity_3, entity_9, 2*sizeof(char));
}