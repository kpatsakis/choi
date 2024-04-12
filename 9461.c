void fun()
{
  int entity_2 = 55;
  int entity_7 = 66;
  char* entity_5;
  char entity_4[28] = "";
  entity_4 = NULL;
  char entity_9 = 'h';
  memset(entity_4, 'J', 28-1);
  entity_4[28-1]='';
  entity_5 = (char*)malloc(43*sizeof(char));
  entity_5[43-1]='';
  entity_4[entity_2] = 'L';
}