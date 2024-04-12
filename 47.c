void fun()
{
  int entity_4 = 16;
  char entity_9 = 'D';
  char entity_5[32] = "";
  entity_5 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(86*sizeof(char));
  entity_6[86-1]='';
  memset(entity_5, 'z', 32-1);
  entity_5[32-1]='';
  memcpy(entity_6, entity_5, 32*sizeof(char));
}