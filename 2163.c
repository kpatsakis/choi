void fun()
{
  int entity_7 = 66;
  char entity_3[14] = "";
  entity_3 = NULL;
  char* entity_4;
  char entity_9[72] = "";
  entity_9 = NULL;
  char entity_6[12] = "";
  entity_6 = NULL;
  memset(entity_9, 'b', 72-1);
  entity_9[72-1]='';
  entity_4 = (char*)malloc(entity_7*sizeof(char));
  entity_4[entity_7-1]='';
  memset(entity_6, 'j', 12-1);
  entity_6[12-1]='';
  memset(entity_3, 'k', 14-1);
  entity_3[14-1]='';
  memcpy(entity_4, entity_9, 72*sizeof(char));
}