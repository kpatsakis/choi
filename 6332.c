void fun()
{
  int entity_3 = 85;
  char* entity_9;
  char entity_7[10] = "";
  entity_7 = NULL;
  char entity_1[24] = "";
  entity_1 = NULL;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  char entity_2 = 'Y';
  memset(entity_1, 'u', 24-1);
  entity_1[24-1]='';
  memset(entity_7, 'm', 10-1);
  entity_7[10-1]='';
  entity_9 = (char*)malloc(84*sizeof(char));
  entity_9[84-1]='';
  memset(entity_8, 'S', entity_3-1);
  entity_8[entity_3-1]='';
  memcpy(entity_9, entity_8, entity_3*sizeof(char));
}