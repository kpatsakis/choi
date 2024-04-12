void fun()
{
  int entity_8 = 12;
  char entity_9[58] = "";
  char* entity_7;
  memset(entity_9, 'M', 58-1);
  entity_9[58-1]='0';
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[0]='0';
  entity_8 = 60;
  memcpy(entity_7, entity_9, 58*sizeof(char));
}