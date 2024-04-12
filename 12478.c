void fun()
{
  int entity_6 = 59;
  int entity_9 = 15;
  char entity_2[40] = "";
  char* entity_4;
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[0]='0';
  memset(entity_2, 't', 40-1);
  entity_2[40-1]='0';
  memcpy(entity_4, entity_2, 40*sizeof(char));
}