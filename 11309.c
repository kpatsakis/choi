void fun()
{
  int entity_5 = 84;
  int entity_6 = 30;
  char entity_1[82] = "";
  char* entity_4;
  char entity_9 = 'A';
  entity_4 = (char*)malloc(83*sizeof(char));
  entity_4[0]='0';
  memset(entity_1, 'B', 82-1);
  entity_1[82-1]='0';
  memcpy(entity_4, entity_1, 82*sizeof(char));
}