void fun()
{
  int entity_0 = 64;
  int entity_9 = 88;
  int entity_3 = 16;
  char* entity_4;
  char entity_7[36] = "";
  entity_7 = NULL;
  char entity_5[24] = "";
  entity_5 = NULL;
  memset(entity_7, 'j', 36-1);
  entity_7[36-1]='';
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  memset(entity_5, 'Q', 24-1);
  entity_5[24-1]='';
  memcpy(entity_4, entity_7, 36*sizeof(char));
}