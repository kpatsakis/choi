void fun()
{
  int entity_9 = 26;
  char* entity_8;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  memset(entity_3, 'V', entity_9-1);
  entity_3[entity_9-1]='';
  entity_8 = (char*)malloc(86*sizeof(char));
  entity_8[86-1]='';
  entity_9 = 7;
  memcpy(entity_8, entity_3, entity_9*sizeof(char));
}