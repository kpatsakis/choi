void fun()
{
  int entity_2 = 5;
  char* entity_0;
  char* entity_9;
  char entity_3[22] = "";
  entity_3 = NULL;
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[entity_2-1]='';
  memset(entity_3, 'T', 22-1);
  entity_3[22-1]='';
  entity_0 = (char*)malloc(49*sizeof(char));
  entity_0[49-1]='';
  memcpy(entity_9, entity_3, 22*sizeof(char));
}