void fun()
{
  int entity_2 = 23;
  char* entity_9;
  char entity_8 = 'k';
  char entity_3[52] = "";
  entity_3 = NULL;
  char entity_4[67] = "";
  entity_4 = NULL;
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[entity_2-1]='';
  memset(entity_4, 'R', 67-1);
  entity_4[67-1]='';
  memset(entity_3, 'k', 52-1);
  entity_3[52-1]='';
  entity_2 = 13;
  memcpy(entity_9, entity_4, 67*sizeof(char));
}