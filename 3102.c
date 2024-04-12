void fun()
{
  int entity_3 = 15;
  int entity_4 = 48;
  char* entity_8;
  char entity_7[52] = "";
  entity_7 = NULL;
  char entity_1[4] = "";
  entity_1 = NULL;
  memset(entity_7, 'D', 52-1);
  entity_7[52-1]='';
  entity_8 = (char*)malloc(67*sizeof(char));
  entity_8[67-1]='';
  memset(entity_1, 'm', 4-1);
  entity_1[4-1]='';
  entity_3 = 41;
  entity_1[entity_3] = 'm';
}