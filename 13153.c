void fun()
{
  int entity_4 = 83;
  entity_4 = 76;
  char entity_1[79] = "";
  char* entity_2;
  char entity_5 = 'o';
  char entity_6 = 'U';
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[0]='0';
  memset(entity_1, 'Z', 79-1);
  entity_1[79-1]='0';
  memcpy(entity_2, entity_1, 79*sizeof(char));
}