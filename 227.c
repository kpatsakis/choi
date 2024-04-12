void fun()
{
  int entity_8 = 8;
  char entity_9[67] = "";
  entity_9 = NULL;
  char entity_4[96] = "";
  entity_4 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[entity_8-1]='';
  memset(entity_9, 'g', 67-1);
  entity_9[67-1]='';
  memset(entity_4, 'P', 96-1);
  entity_4[96-1]='';
  memcpy(entity_2, entity_9, 67*sizeof(char));
}