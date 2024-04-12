void fun()
{
  int entity_7 = 32;
  char entity_6 = 'L';
  char* entity_8;
  char entity_4 = 'J';
  char entity_5[11] = "";
  entity_5 = NULL;
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[entity_7-1]='';
  memset(entity_5, 'e', 11-1);
  entity_5[11-1]='';
  entity_7 = 65;
  memcpy(entity_8, entity_5, 11*sizeof(char));
}