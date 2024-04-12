void fun()
{
  int entity_9 = 5;
  entity_9 = 31;
  char* entity_8;
  char entity_7[46] = "";
  entity_7 = NULL;
  memset(entity_7, 'A', 46-1);
  entity_7[46-1]='';
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[entity_9-1]='';
  memcpy(entity_8, entity_7, 46*sizeof(char));
}