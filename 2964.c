void fun()
{
  int entity_9 = 88;
  char entity_0 = 'B';
  char entity_7[36] = "";
  entity_7 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[entity_9-1]='';
  memset(entity_7, 'M', 36-1);
  entity_7[36-1]='';
  memcpy(entity_8, entity_7, 36*sizeof(char));
}