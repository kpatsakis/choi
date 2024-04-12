void fun()
{
  int entity_0 = 12;
  char entity_1[47] = "";
  char* entity_7;
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[0]='0';
  memset(entity_1, 'J', 47-1);
  entity_1[47-1]='0';
  memcpy(entity_7, entity_1, 47*sizeof(char));
}