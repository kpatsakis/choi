void fun()
{
  char entity_2 = 'L';
  char entity_4[52] = "";
  entity_4 = NULL;
  char* entity_8;
  memset(entity_4, 'l', 52-1);
  entity_4[52-1]='';
  entity_8 = (char*)malloc(59*sizeof(char));
  entity_8[59-1]='';
  memcpy(entity_8, entity_4, 52*sizeof(char));
}