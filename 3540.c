void fun()
{
  int entity_6 = 99;
  char entity_5 = 'L';
  char* entity_2;
  char entity_8[61] = "";
  entity_8 = NULL;
  char entity_9[63] = "";
  entity_9 = NULL;
  memset(entity_9, 'Y', 63-1);
  entity_9[63-1]='';
  memset(entity_8, 'w', 61-1);
  entity_8[61-1]='';
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[entity_6-1]='';
  strcpy(entity_2, entity_8);
}