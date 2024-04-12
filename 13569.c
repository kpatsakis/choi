void fun()
{
  int entity_2 = 97;
  int entity_9 = 53;
  entity_2 = 81;
  char* entity_7;
  char entity_8[72] = "";
  memset(entity_8, 'J', 72-1);
  entity_8[72-1]='0';
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_8, 72*sizeof(char));
}