void fun()
{
  int entity_9 = 61;
  char* entity_7;
  char* entity_2;
  char entity_6[67] = "";
  char entity_3[94] = "";
  entity_2 = (char*)malloc(83*sizeof(char));
  entity_2[0]='0';
  entity_7 = (char*)malloc(20*sizeof(char));
  entity_7[0]='0';
  memset(entity_3, 'z', 94-1);
  entity_3[94-1]='0';
  memset(entity_6, 'd', 67-1);
  entity_6[67-1]='0';
  memcpy(entity_7, entity_6, 67*sizeof(char));
}