void fun()
{
  int entity_2 = 8;
  entity_2 = 74;
  char* entity_6;
  char entity_3[31] = "";
  entity_3 = NULL;
  char entity_8 = 'L';
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[entity_2-1]='';
  memset(entity_3, 'L', 31-1);
  entity_3[31-1]='';
  strcpy(entity_6, entity_3);
}