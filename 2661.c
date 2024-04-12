void fun()
{
  int entity_4 = 61;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  char* entity_8;
  char entity_3 = 'H';
  char entity_2 = 'L';
  memset(entity_6, 'w', entity_4-1);
  entity_6[entity_4-1]='';
  entity_8 = (char*)malloc(58*sizeof(char));
  entity_8[58-1]='';
  entity_4 = 69;
  strcpy(entity_8, entity_6);
}