void fun()
{
  int entity_4 = 28;
  char entity_7[39] = "";
  entity_7 = NULL;
  char entity_5[35] = "";
  entity_5 = NULL;
  char entity_2 = 'L';
  char* entity_3;
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[entity_4-1]='';
  memset(entity_7, 'a', 39-1);
  entity_7[39-1]='';
  memset(entity_5, 'e', 35-1);
  entity_5[35-1]='';
  memcpy(entity_3, entity_5, 35*sizeof(char));
}