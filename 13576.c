void fun()
{
  int entity_8 = 88;
  entity_8 = 89;
  char* entity_9;
  char entity_7[3] = "";
  memset(entity_7, 'j', 3-1);
  entity_7[3-1]='0';
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_7, 3*sizeof(char));
}