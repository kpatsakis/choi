void fun()
{
  int entity_3 = 85;
  char entity_7[67] = "";
  entity_7 = NULL;
  char entity_9[52] = "";
  entity_9 = NULL;
  char entity_6 = 'y';
  char* entity_8;
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[entity_3-1]='';
  memset(entity_9, 'h', 52-1);
  entity_9[52-1]='';
  memset(entity_7, 'D', 67-1);
  entity_7[67-1]='';
  strcpy(entity_8, entity_9);
}