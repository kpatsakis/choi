void fun()
{
  int entity_3 = 79;
  entity_3 = 53;
  char* entity_2;
  char entity_7[67] = "";
  memset(entity_7, 'k', 67-1);
  entity_7[67-1]='0';
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_7, 67*sizeof(char));
}