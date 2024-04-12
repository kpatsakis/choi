void fun()
{
  int entity_9 = 53;
  char entity_7[58] = "";
  char* entity_3;
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[0]='0';
  memset(entity_7, 'S', 58-1);
  entity_7[58-1]='0';
  entity_9 = 48;
  memcpy(entity_3, entity_7, 58*sizeof(char));
}