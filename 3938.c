void fun()
{
  char entity_6 = 'L';
  char* entity_9;
  char entity_8[54] = "";
  entity_8 = NULL;
  char entity_3[37] = "";
  entity_3 = NULL;
  memset(entity_3, 'u', 37-1);
  entity_3[37-1]='';
  memset(entity_8, 'm', 54-1);
  entity_8[54-1]='';
  entity_9 = (char*)malloc(73*sizeof(char));
  entity_9[73-1]='';
  memcpy(entity_9, entity_8, 54*sizeof(char));
}