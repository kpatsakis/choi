void fun()
{
  int entity_9 = 69;
  char entity_1[10] = "";
  entity_1 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[entity_9-1]='';
  memset(entity_1, 'o', 10-1);
  entity_1[10-1]='';
  memcpy(entity_0, entity_1, 10*sizeof(char));
}