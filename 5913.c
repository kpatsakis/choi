void fun()
{
  int entity_3 = 4;
  entity_3 = 88;
  char* entity_9;
  char entity_0[67] = "";
  entity_0 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(36*sizeof(char));
  entity_5[36-1]='';
  memset(entity_0, 'E', 67-1);
  entity_0[67-1]='';
  entity_9 = (char*)malloc(entity_3*sizeof(char));
  entity_9[entity_3-1]='';
  memcpy(entity_9, entity_0, 67*sizeof(char));
}