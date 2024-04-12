void fun()
{
  int entity_6 = 68;
  int entity_7 = 76;
  entity_6 = 63;
  char* entity_5;
  char entity_4 = 'D';
  char entity_1[84] = "";
  entity_1 = NULL;
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[entity_6-1]='';
  memset(entity_1, 'k', 84-1);
  entity_1[84-1]='';
  memcpy(entity_5, entity_1, 84*sizeof(char));
}