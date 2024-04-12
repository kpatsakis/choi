void fun()
{
  int entity_2 = 33;
  entity_2 = 90;
  char entity_6[78] = "";
  char entity_5[79] = "";
  char* entity_9;
  memset(entity_5, 'W', 79-1);
  entity_5[79-1]='0';
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[0]='0';
  memset(entity_6, 'R', 78-1);
  entity_6[78-1]='0';
  memcpy(entity_9, entity_6, 78*sizeof(char));
}