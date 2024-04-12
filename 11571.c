void fun()
{
  int entity_7 = 94;
  char entity_8 = 'u';
  char* entity_6;
  char entity_1[10] = "";
  memset(entity_1, 'o', 10-1);
  entity_1[10-1]='0';
  entity_6 = (char*)malloc(66*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_1, 10*sizeof(char));
}