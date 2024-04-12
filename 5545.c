void fun()
{
  int entity_0 = 28;
  char entity_5[entity_0] = "";
  entity_5 = NULL;
  char* entity_2;
  char entity_4[47] = "";
  entity_4 = NULL;
  char entity_8 = 'L';
  memset(entity_4, 'i', 47-1);
  entity_4[47-1]='';
  entity_2 = (char*)malloc(71*sizeof(char));
  entity_2[71-1]='';
  memset(entity_5, 'S', entity_0-1);
  entity_5[entity_0-1]='';
  strcpy(entity_2, entity_5);
}