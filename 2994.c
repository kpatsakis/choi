void fun()
{
  int entity_0 = 69;
  int entity_3 = 40;
  char entity_6 = 'L';
  char entity_7[94] = "";
  entity_7 = NULL;
  char* entity_2;
  char entity_8 = 'y';
  memset(entity_7, 'i', 94-1);
  entity_7[94-1]='';
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[entity_3-1]='';
  strcpy(entity_2, entity_7);
}