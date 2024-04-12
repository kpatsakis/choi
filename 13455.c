void fun()
{
  int entity_6 = 85;
  char* entity_7;
  char entity_1[37] = "";
  memset(entity_1, 'p', 37-1);
  entity_1[37-1]='0';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[0]='0';
  entity_6 = 39;
  memcpy(entity_7, entity_1, 37*sizeof(char));
}