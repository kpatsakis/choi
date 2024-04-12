void fun()
{
  int entity_6 = 75;
  char* entity_4;
  char entity_7[7] = "";
  entity_7 = NULL;
  char* entity_9;
  memset(entity_7, 'V', 7-1);
  entity_7[7-1]='';
  entity_9 = (char*)malloc(96*sizeof(char));
  entity_9[96-1]='';
  entity_4 = (char*)malloc(99*sizeof(char));
  entity_4[99-1]='';
  memcpy(entity_4, entity_7, 7*sizeof(char));
}