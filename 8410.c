void fun()
{
  int entity_4 = 2;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  char entity_2 = 'L';
  char* entity_5;
  char* entity_8;
  entity_5 = (char*)malloc(79*sizeof(char));
  entity_5[79-1]='';
  entity_8 = (char*)malloc(21*sizeof(char));
  entity_8[21-1]='';
  memset(entity_7, 'H', entity_4-1);
  entity_7[entity_4-1]='';
  entity_4 = 52;
  memcpy(entity_8, entity_7, entity_4*sizeof(char));
}