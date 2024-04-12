void fun()
{
  int entity_1 = 52;
  char entity_9[64] = "";
  entity_9 = NULL;
  char entity_2[3] = "";
  entity_2 = NULL;
  char* entity_3;
  memset(entity_2, 'S', 3-1);
  entity_2[3-1]='';
  memset(entity_9, 'K', 64-1);
  entity_9[64-1]='';
  entity_3 = (char*)malloc(61*sizeof(char));
  entity_3[61-1]='';
  strcpy(entity_3, entity_9);
}