void fun()
{
  int entity_1 = 87;
  int entity_4 = 85;
  int entity_2 = 35;
  char entity_6[26] = "";
  entity_6 = NULL;
  char entity_3 = 'Q';
  char* entity_7;
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[entity_2-1]='';
  memset(entity_6, 'e', 26-1);
  entity_6[26-1]='';
  memcpy(entity_7, entity_6, 26*sizeof(char));
}