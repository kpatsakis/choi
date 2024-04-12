void fun()
{
  int entity_8 = 10;
  entity_8 = 18;
  char* entity_7;
  char entity_4[6] = "";
  entity_4 = NULL;
  char entity_5[94] = "";
  entity_5 = NULL;
  memset(entity_5, 'd', 94-1);
  entity_5[94-1]='';
  memset(entity_4, 'g', 6-1);
  entity_4[6-1]='';
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  memcpy(entity_7, entity_4, 6*sizeof(char));
}