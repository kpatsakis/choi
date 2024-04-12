void fun()
{
  int entity_9 = 43;
  char* entity_7;
  char entity_3[26] = "";
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[0]='0';
  memset(entity_3, 'q', 26-1);
  entity_3[26-1]='0';
  memcpy(entity_7, entity_3, 26*sizeof(char));
}