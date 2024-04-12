void fun()
{
  int entity_7 = 68;
  char entity_1[94] = "";
  char entity_9 = 'f';
  char* entity_8;
  memset(entity_1, 'g', 94-1);
  entity_1[94-1]='0';
  entity_8 = (char*)malloc(34*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_1, 94*sizeof(char));
}