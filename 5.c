void fun()
{
  int entity_6 = 33;
  char entity_8[22] = "";
  entity_8 = NULL;
  char* entity_3;
  char entity_9[entity_6] = "";
  entity_9 = NULL;
  memset(entity_8, 'e', 22-1);
  entity_8[22-1]='';
  memset(entity_9, 'k', entity_6-1);
  entity_9[entity_6-1]='';
  entity_3 = (char*)malloc(86*sizeof(char));
  entity_3[86-1]='';
  memcpy(entity_3, entity_9, entity_6*sizeof(char));
}