void fun()
{
  int entity_9 = 6;
  entity_9 = 68;
  char entity_3[51] = "";
  entity_3 = NULL;
  char* entity_1;
  char entity_6[46] = "";
  entity_6 = NULL;
  memset(entity_3, 'f', 51-1);
  entity_3[51-1]='';
  entity_1 = (char*)malloc(entity_9*sizeof(char));
  entity_1[entity_9-1]='';
  memset(entity_6, 'A', 46-1);
  entity_6[46-1]='';
  memcpy(entity_1, entity_6, 46*sizeof(char));
}