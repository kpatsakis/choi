void fun()
{
  int entity_0 = 79;
  char entity_4[92] = "";
  entity_4 = NULL;
  char* entity_2;
  char entity_9[14] = "";
  entity_9 = NULL;
  memset(entity_9, 'j', 14-1);
  entity_9[14-1]='';
  entity_2 = (char*)malloc(entity_0*sizeof(char));
  entity_2[entity_0-1]='';
  memset(entity_4, 'X', 92-1);
  entity_4[92-1]='';
  entity_0 = 19;
  memcpy(entity_2, entity_9, 14*sizeof(char));
}