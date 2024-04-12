void fun()
{
  int entity_2 = 62;
  char entity_3[76] = "";
  char entity_7[79] = "";
  char* entity_9;
  memset(entity_3, 'O', 76-1);
  entity_3[76-1]='0';
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[0]='0';
  memset(entity_7, 'w', 79-1);
  entity_7[79-1]='0';
  memcpy(entity_9, entity_7, 79*sizeof(char));
}