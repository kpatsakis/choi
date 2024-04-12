void fun()
{
  int entity_7 = 87;
  int entity_1 = 78;
  char entity_9[26] = "";
  char entity_8 = 'K';
  char* entity_6;
  memset(entity_9, 'I', 26-1);
  entity_9[26-1]='0';
  entity_6 = (char*)malloc(entity_7*sizeof(char));
  entity_6[0]='0';
  entity_7 = 90;
  memcpy(entity_6, entity_9, 26*sizeof(char));
}