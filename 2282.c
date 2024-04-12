void fun()
{
  int entity_5 = 64;
  entity_5 = 45;
  char entity_4[30] = "";
  entity_4 = NULL;
  char entity_6[67] = "";
  entity_6 = NULL;
  char* entity_2;
  memset(entity_6, 'i', 67-1);
  entity_6[67-1]='';
  memset(entity_4, 'Z', 30-1);
  entity_4[30-1]='';
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[entity_5-1]='';
  memcpy(entity_2, entity_4, 30*sizeof(char));
}