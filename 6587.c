void fun()
{
  int entity_9 = 62;
  char entity_6[66] = "";
  entity_6 = NULL;
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  char* entity_0;
  char entity_4 = 'M';
  char* entity_7;
  memset(entity_6, 'U', 66-1);
  entity_6[66-1]='';
  memset(entity_2, 'u', entity_9-1);
  entity_2[entity_9-1]='';
  entity_7 = (char*)malloc(32*sizeof(char));
  entity_7[32-1]='';
  entity_0 = (char*)malloc(98*sizeof(char));
  entity_0[98-1]='';
  memcpy(entity_0, entity_2, entity_9*sizeof(char));
}