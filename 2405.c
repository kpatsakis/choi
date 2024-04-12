void fun()
{
  int entity_8 = 29;
  entity_8 = 78;
  char entity_5[2] = "";
  entity_5 = NULL;
  char* entity_9;
  memset(entity_5, 'O', 2-1);
  entity_5[2-1]='';
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  memcpy(entity_9, entity_5, 2*sizeof(char));
}