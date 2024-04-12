void fun()
{
  int entity_0 = 43;
  char* entity_9;
  char entity_5 = 'K';
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  char* entity_6;
  memset(entity_1, 'J', entity_0-1);
  entity_1[entity_0-1]='';
  entity_9 = (char*)malloc(22*sizeof(char));
  entity_9[22-1]='';
  entity_6 = (char*)malloc(38*sizeof(char));
  entity_6[38-1]='';
  memcpy(entity_6, entity_1, entity_0*sizeof(char));
}