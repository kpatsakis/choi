void fun()
{
  int entity_3 = 65;
  char entity_1[93] = "";
  entity_1 = NULL;
  char entity_2 = 'L';
  char entity_6 = 'Y';
  char* entity_5;
  char entity_4[20] = "";
  entity_4 = NULL;
  memset(entity_1, 'S', 93-1);
  entity_1[93-1]='';
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[entity_3-1]='';
  memset(entity_4, 'p', 20-1);
  entity_4[20-1]='';
  memcpy(entity_5, entity_1, 93*sizeof(char));
}