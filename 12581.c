void fun()
{
  int entity_8 = 25;
  char entity_3[9] = "";
  char* entity_7;
  memset(entity_3, 'R', 9-1);
  entity_3[9-1]='0';
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_3, 9*sizeof(char));
}