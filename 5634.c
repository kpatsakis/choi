void fun()
{
  int entity_0 = 50;
  char* entity_8;
  char entity_4[13] = "";
  entity_4 = NULL;
  char entity_1[16] = "";
  entity_1 = NULL;
  char entity_9 = 'R';
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  memset(entity_1, 'k', 16-1);
  entity_1[16-1]='';
  memset(entity_4, 'W', 13-1);
  entity_4[13-1]='';
  memcpy(entity_8, entity_1, 16*sizeof(char));
}