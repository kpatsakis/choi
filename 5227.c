void fun()
{
  int entity_2 = 20;
  char* entity_3;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  char entity_4 = 'L';
  memset(entity_7, 'd', entity_2-1);
  entity_7[entity_2-1]='';
  entity_3 = (char*)malloc(83*sizeof(char));
  entity_3[83-1]='';
  strcpy(entity_3, entity_7);
}