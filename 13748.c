void fun()
{
  int entity_0 = 72;
  int entity_7 = 61;
  char* entity_5;
  char entity_9[67] = "";
  char entity_6[48] = "";
  char entity_1 = 'J';
  entity_5 = (char*)malloc(entity_7*sizeof(char));
  entity_5[0]='0';
  memset(entity_6, 'F', 48-1);
  entity_6[48-1]='0';
  memset(entity_9, 'j', 67-1);
  entity_9[67-1]='0';
  entity_7 = 81;
  memcpy(entity_5, entity_9, 67*sizeof(char));
}