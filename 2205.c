void fun()
{
  int entity_5 = 99;
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  char* entity_9;
  char* entity_7;
  entity_9 = (char*)malloc(11*sizeof(char));
  entity_9[11-1]='';
  memset(entity_6, 'W', entity_5-1);
  entity_6[entity_5-1]='';
  entity_7 = (char*)malloc(50*sizeof(char));
  entity_7[50-1]='';
  entity_6[93] = 'L';
}