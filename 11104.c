void fun()
{
  int entity_5 = 46;
  char entity_1[67] = "";
  char entity_8 = 'n';
  char entity_6[95] = "";
  char* entity_7;
  memset(entity_1, 'z', 67-1);
  entity_1[67-1]='0';
  memset(entity_6, 'U', 95-1);
  entity_6[95-1]='0';
  entity_7 = (char*)malloc(56*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_1, 67*sizeof(char));
}