void fun()
{
  int entity_9 = 74;
  int entity_4 = 60;
  char entity_2 = 'O';
  char* entity_3;
  char entity_6[35] = "";
  memset(entity_6, 'C', 35-1);
  entity_6[35-1]='0';
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[0]='0';
  entity_9 = 44;
  memcpy(entity_3, entity_6, 35*sizeof(char));
}