void fun()
{
  int entity_6 = 64;
  entity_6 = 48;
  char* entity_7;
  char entity_2[10] = "";
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[0]='0';
  memset(entity_2, 'K', 10-1);
  entity_2[10-1]='0';
  memcpy(entity_7, entity_2, 10*sizeof(char));
}