void fun()
{
  int entity_0 = 75;
  char* entity_2;
  char* entity_5;
  char entity_4[28] = "";
  entity_4 = NULL;
  memset(entity_4, 'B', 28-1);
  entity_4[28-1]='';
  entity_2 = (char*)malloc(73*sizeof(char));
  entity_2[73-1]='';
  entity_5 = (char*)malloc(39*sizeof(char));
  entity_5[39-1]='';
  entity_4[entity_0] = 'L';
}