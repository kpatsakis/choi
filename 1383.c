void fun()
{
  int entity_2 = 37;
  char* entity_9;
  char entity_0[36] = "";
  entity_0 = NULL;
  entity_9 = (char*)malloc(74*sizeof(char));
  entity_9[74-1]='';
  memset(entity_0, 'C', 36-1);
  entity_0[36-1]='';
  memcpy(entity_9, entity_0, 36*sizeof(char));
}