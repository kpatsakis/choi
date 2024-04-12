void fun()
{
  int entity_2 = 88;
  char entity_5[11] = "";
  char* entity_7;
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[0]='0';
  memset(entity_5, 'W', 11-1);
  entity_5[11-1]='0';
  memcpy(entity_7, entity_5, 11*sizeof(char));
}