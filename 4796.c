void fun()
{
  char entity_9[4] = "";
  entity_9 = NULL;
  char* entity_3;
  char entity_6[62] = "";
  entity_6 = NULL;
  memset(entity_6, 'E', 62-1);
  entity_6[62-1]='';
  memset(entity_9, 'W', 4-1);
  entity_9[4-1]='';
  entity_3 = (char*)malloc(66*sizeof(char));
  entity_3[66-1]='';
  memcpy(entity_3, entity_9, 4*sizeof(char));
}