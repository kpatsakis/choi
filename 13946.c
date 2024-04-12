void fun()
{
  int entity_2 = 9;
  int entity_5 = 81;
  entity_5 = 63;
  char entity_1[66] = "";
  char* entity_4;
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[0]='0';
  memset(entity_1, 'y', 66-1);
  entity_1[66-1]='0';
  memcpy(entity_4, entity_1, 66*sizeof(char));
}