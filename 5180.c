void fun()
{
  int entity_5 = 75;
  char* entity_3;
  char entity_9 = 'Y';
  char entity_4 = 'D';
  char entity_7[64] = "";
  entity_7 = NULL;
  memset(entity_7, 'j', 64-1);
  entity_7[64-1]='';
  entity_3 = (char*)malloc(entity_5*sizeof(char));
  entity_3[entity_5-1]='';
  memcpy(entity_3, entity_7, 64*sizeof(char));
}