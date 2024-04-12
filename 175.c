void fun()
{
  char* entity_9;
  char entity_3[40] = "";
  entity_3 = NULL;
  char* entity_0;
  entity_9 = (char*)malloc(84*sizeof(char));
  entity_9[84-1]='';
  memset(entity_3, 'E', 40-1);
  entity_3[40-1]='';
  entity_0 = (char*)malloc(42*sizeof(char));
  entity_0[42-1]='';
  memcpy(entity_9, entity_3, 40*sizeof(char));
}