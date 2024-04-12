void fun()
{
  char entity_8 = 'k';
  char* entity_9;
  char entity_6[14] = "";
  entity_9 = (char*)malloc(57*sizeof(char));
  entity_9[0]='0';
  memset(entity_6, 's', 14-1);
  entity_6[14-1]='0';
  memcpy(entity_9, entity_6, 14*sizeof(char));
}