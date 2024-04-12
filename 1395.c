void fun()
{
  int entity_9 = 48;
  char* entity_8;
  char entity_2[36] = "";
  entity_2 = NULL;
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[entity_9-1]='';
  memset(entity_2, 'L', 36-1);
  entity_2[36-1]='';
  memcpy(entity_8, entity_2, 36*sizeof(char));
}