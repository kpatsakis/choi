void fun()
{
  int entity_2 = 8;
  char* entity_0;
  char entity_6 = 'L';
  char entity_7[35] = "";
  entity_7 = NULL;
  char entity_3 = 'Y';
  char entity_4 = 'V';
  memset(entity_7, 'D', 35-1);
  entity_7[35-1]='';
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[entity_2-1]='';
  entity_2 = 32;
  strcpy(entity_0, entity_7);
}