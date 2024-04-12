void fun()
{
  int entity_3 = 78;
  char* entity_5;
  char entity_9[89] = "";
  entity_9 = NULL;
  char entity_1[29] = "";
  entity_1 = NULL;
  memset(entity_1, 'K', 29-1);
  entity_1[29-1]='';
  entity_5 = (char*)malloc(84*sizeof(char));
  entity_5[84-1]='';
  memset(entity_9, 'n', 89-1);
  entity_9[89-1]='';
  memcpy(entity_5, entity_1, 29*sizeof(char));
}