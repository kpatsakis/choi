void fun()
{
  int entity_9 = 76;
  char* entity_2;
  char entity_6[65] = "";
  entity_6 = NULL;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  memset(entity_6, 'e', 65-1);
  entity_6[65-1]='';
  memset(entity_3, 'x', entity_9-1);
  entity_3[entity_9-1]='';
  entity_2 = (char*)malloc(36*sizeof(char));
  entity_2[36-1]='';
  memcpy(entity_2, entity_3, entity_9*sizeof(char));
}