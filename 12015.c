void fun()
{
  int entity_3 = 60;
  char entity_1[21] = "";
  char* entity_7;
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[0]='0';
  memset(entity_1, 'Q', 21-1);
  entity_1[21-1]='0';
  memcpy(entity_7, entity_1, 21*sizeof(char));
}