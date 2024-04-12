void fun()
{
  char entity_9[72] = "";
  entity_9 = NULL;
  char* entity_3;
  char entity_6[18] = "";
  entity_6 = NULL;
  char entity_5[64] = "";
  entity_5 = NULL;
  memset(entity_9, 'K', 72-1);
  entity_9[72-1]='';
  entity_3 = (char*)malloc(22*sizeof(char));
  entity_3[22-1]='';
  memset(entity_6, 'Q', 18-1);
  entity_6[18-1]='';
  memset(entity_5, 'y', 64-1);
  entity_5[64-1]='';
  memcpy(entity_3, entity_9, 72*sizeof(char));
}