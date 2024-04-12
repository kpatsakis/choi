void fun()
{
  char* entity_9;
  char entity_8[57] = "";
  entity_9 = (char*)malloc(71*sizeof(char));
  entity_9[0]='0';
  memset(entity_8, 'Y', 57-1);
  entity_8[57-1]='0';
  memcpy(entity_9, entity_8, 57*sizeof(char));
}