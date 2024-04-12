void fun()
{
  int entity_4 = 89;
  int entity_1 = 70;
  entity_4 = 11;
  char entity_9[43] = "";
  entity_9 = NULL;
  char* entity_8;
  memset(entity_9, 'V', 43-1);
  entity_9[43-1]='';
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[entity_4-1]='';
  memcpy(entity_8, entity_9, 43*sizeof(char));
}