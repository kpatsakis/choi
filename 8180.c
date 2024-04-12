void fun()
{
  int entity_9 = 19;
  int entity_0 = 89;
  entity_9 = 1;
  char* entity_4;
  char* entity_6;
  char entity_7[38] = "";
  entity_7 = NULL;
  memset(entity_7, 'p', 38-1);
  entity_7[38-1]='';
  entity_4 = (char*)malloc(16*sizeof(char));
  entity_4[16-1]='';
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  memcpy(entity_6, entity_7, 38*sizeof(char));
}