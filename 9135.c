void fun()
{
  char entity_7[10] = "";
  entity_7 = NULL;
  char* entity_2;
  char entity_3 = 'L';
  entity_2 = (char*)malloc(77*sizeof(char));
  entity_2[77-1]='';
  memset(entity_7, 'u', 10-1);
  entity_7[10-1]='';
  memcpy(entity_2, entity_7, 10*sizeof(char));
}