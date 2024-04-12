void fun()
{
  int entity_7 = 66;
  char entity_9[95] = "";
  char entity_4 = 'd';
  char* entity_3;
  char entity_6[77] = "";
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[0]='0';
  memset(entity_6, 's', 77-1);
  entity_6[77-1]='0';
  memset(entity_9, 'N', 95-1);
  entity_9[95-1]='0';
  memcpy(entity_3, entity_9, 95*sizeof(char));
}